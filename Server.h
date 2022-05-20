#ifndef MYCELIUM_SERVER_H
#define MYCELIUM_SERVER_H

#include <iostream>
#include <optional>
#include <boost/asio.hpp>
#include <vector>

#include "ByteBuffer.h"

class Connection;

void handlePacket(const std::shared_ptr<Connection>&, ByteBuffer);

std::vector<std::shared_ptr<Connection>> connections;

class Connection : public std::enable_shared_from_this<Connection> {
public:
    Connection(boost::asio::ip::tcp::socket&& socket)
            : socket(std::move(socket)) {}

    void start() {
        boost::asio::async_read_until(socket, streambuf, '\n',
          [self = shared_from_this()]
                  (boost::system::error_code error, std::size_t bytes_transferred) {
                handlePacket(self, ByteBuffer(
                        (byte_t*)(&self->streambuf)->data().data(),
                        (unsigned int)((&self->streambuf)->size())));
          });
    }

    void async_write(ByteBuffer buf) {
        buffers_[active_buffer_].emplace_back(buf.bytes.begin(), buf.bytes.end());
        async_write();
        async_write();
    }

private:
    void async_write() {
        active_buffer_ ^= 1; // switch buffers
        for (const auto& data : buffers_[active_buffer_]) {
            buffer_seq_.push_back(boost::asio::buffer(data));
        }
        boost::asio::async_write(socket, buffer_seq_, [this, self = shared_from_this()](const boost::system::error_code& ec, size_t bytes_transferred) {
            std::lock_guard<std::mutex> lock(buffers_mtx_);
            buffers_[active_buffer_].clear();
            buffer_seq_.clear();
            if (!ec) {
                std::cout << "Wrote " << bytes_transferred << " bytes\n";
                if (!buffers_[active_buffer_ ^ 1].empty()) // have more work
                    async_write();
            }
        });
    }

public:
    boost::asio::ip::tcp::socket socket;
    boost::asio::streambuf streambuf;
    ByteBuffer shared_buffer;

    std::mutex buffers_mtx_;
    std::vector<std::string> buffers_[2]; // a double buffer
    std::vector<boost::asio::const_buffer> buffer_seq_;
    int active_buffer_ = 0;
};

class Server
{
public:

    Server(boost::asio::io_context& io_context, std::uint16_t port)
            : io_context(io_context)
            , acceptor  (io_context, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), port))
    {
    }

    void async_accept()
    {
        socket.emplace(io_context);

        acceptor.async_accept(*socket, [&] (boost::system::error_code error)
        {
            std::shared_ptr<Connection> con = std::make_shared<Connection>(std::move(*socket));
            con->start();
            connections.push_back(con);
            async_accept();
        });
    }

private:

    boost::asio::io_context& io_context;
    boost::asio::ip::tcp::acceptor acceptor;
    std::optional<boost::asio::ip::tcp::socket> socket;
};

#endif //MYCELIUM_SERVER_H
