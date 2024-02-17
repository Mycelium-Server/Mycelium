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