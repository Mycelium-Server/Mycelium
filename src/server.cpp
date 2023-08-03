/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "server.h"

#include <iostream>
#include <memory>
#include <vector>

static fn_init_pipeline server_initCallback;

ServerTCP tcp_start_server(fn_init_pipeline initCallback, const char* host, int port) {
  server_initCallback = initCallback;

  asio::io_context io_context;
  ServerTCP server(io_context, std::string(host), (short) port);
  io_context.run();

  return server;
}


ConnectionTCP::ConnectionTCP(asio::ip::tcp::socket socket)
    : socket(std::move(socket)) {}

ConnectionTCP::~ConnectionTCP() {
  if (ctx) {
    ctx->pipeline->forEach([=](AbstractHandler* handler, int) {
      if (handler->isInboundHandler()) {
        return ((InboundHandler*) handler)->onDisconnect(ctx);
      }
      return true;
    });

    delete ctx;
  }
}

void ConnectionTCP::start() {
  ctx = new ConnectionContext(nullptr, this);
  ctx->pipeline = server_initCallback(ctx);

  ctx->pipeline->forEach([=](AbstractHandler* handler, int) {
    if (handler->isInboundHandler())
      return ((InboundHandler*) handler)->onConnect(ctx);
    return true;
  });

  read();
}

void ConnectionTCP::read() {
  auto self = shared_from_this();
  socket.async_read_some(
      asio::buffer(dataBlock, sizeof(dataBlock)),
      [self](std::error_code error, std::size_t len) {
        if (error) {
          return;
        }

        if (self->ctx) {
          auto* buf = new ByteBuffer((const uint8_t*) self->dataBlock, len);
          self->ctx->eventLoop->addToQueue([=]() {
            if (self->ctx) {
              self->ctx->read(buf);
            }
            self->read();
          });
        }
      });
}

void ConnectionTCP::write(ByteBuffer* buf) {
  asio::async_write(socket, asio::buffer(buf->data.data(), buf->length()),
                    [](std::error_code error, std::size_t) {
                      if (error) {
                        std::cerr << "async_write: " << error << std::endl;
                        return;
                      }
                    });
}

ServerTCP::ServerTCP(asio::io_context& io_context, const std::string& ip, short port)
    : acceptor(io_context,
               asio::ip::tcp::endpoint(asio::ip::address_v4::from_string(ip), port)),
      socket(io_context) {
  accept();
}

void ServerTCP::accept() {
  acceptor.async_accept(socket,
                        [this](std::error_code error) {
                          if (error) {
                            std::cerr << "async_accept: " << error << std::endl;
                            return;
                          }

                          std::make_shared<ConnectionTCP>(std::move(socket))->start();
                          accept();
                        });
}
