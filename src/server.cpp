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
          auto* buf = new ByteBuffer((const unsigned char*) self->dataBlock, len);
          self->ctx->eventLoop->addToQueue([=]() {
            if (self->ctx) {
              self->ctx->read(buf);
            }
          });
        }
        self->read();
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
