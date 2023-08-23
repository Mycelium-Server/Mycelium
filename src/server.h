/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

#pragma once

#include <asio.hpp>
#include <iostream>

#include "connection_context.h"
#include "pipeline.h"

class ConnectionTCP
    : public std::enable_shared_from_this<ConnectionTCP> {
 public:
  explicit ConnectionTCP(asio::ip::tcp::socket);
  ~ConnectionTCP();
  void start();
  void write(ByteBuffer*);

 private:
  void read();

 private:
  asio::ip::tcp::socket socket;
  ConnectionContext* ctx = nullptr;
  char dataBlock[512] {};
};

class ServerTCP {
 public:
  ServerTCP(asio::io_context&, const std::string&, short);

 private:
  void accept();

 private:
  asio::ip::tcp::acceptor acceptor;
  asio::ip::tcp::socket socket;
};

typedef Pipeline* (*fn_init_pipeline)(ConnectionContext*);

ServerTCP tcp_start_server(fn_init_pipeline, const char*, int);