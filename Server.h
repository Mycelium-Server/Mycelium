#ifndef MYCELIUM_SERVER_H
#define MYCELIUM_SERVER_H

#include <vector>
#include <deque>
#include <thread>
#include "ByteBuffer.h"
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio.hpp>

class tcp_connection;
void handlePacket(tcp_connection* con, ByteBuffer buf);

using boost::asio::ip::tcp;

class tcp_connection
        : public boost::enable_shared_from_this<tcp_connection>
{
public:
    typedef boost::shared_ptr<tcp_connection> pointer;

    static pointer create(boost::asio::io_context& io_context) {
        return pointer(new tcp_connection(io_context));
    }

    tcp::socket& socket() {
        return socket_;
    }

    void write(const ByteBuffer& buf) {
        outbox.push_back(buf);
        if(outbox.size() > 1) return;
        write();
    }

    void start() {
        boost::asio::async_read(socket_, streambuf,
                                      boost::bind(&tcp_connection::handle_read, shared_from_this(),
                                                  boost::asio::placeholders::error,
                                                  boost::asio::placeholders::bytes_transferred));
    }

private:
    void write() {
        ByteBuffer& buf = outbox[0];
        boost::asio::async_write(socket_, boost::asio::buffer(buf.bytes), // Why it does not work ????
                                 boost::bind(&tcp_connection::handle_write, shared_from_this(),
                                             boost::asio::placeholders::error,
                                             boost::asio::placeholders::bytes_transferred));
    }

    tcp_connection(boost::asio::io_context& io_context)
            : socket_(io_context) {}

    void handle_write(const boost::system::error_code& /*error*/,
                      size_t /*bytes_transferred*/) {
        outbox.pop_front();
        if(!outbox.empty()) {
            write();
        }
    }

    void handle_read(boost::system::error_code error, size_t) {
        write(ByteBuffer(10));
        handlePacket(this, ByteBuffer(
                (byte_t*)(&streambuf)->data().data(),
                (unsigned int)((&streambuf)->size())));
    }

public:
    tcp::socket socket_;
    std::deque<ByteBuffer> outbox;
    boost::asio::streambuf streambuf;
};

class tcp_server
{
public:
    tcp_server(boost::asio::io_context& io_context, int port)
            : io_context_(io_context),
              acceptor_(io_context, tcp::endpoint(tcp::v4(), port)) {
        start_accept();
    }

private:
    void start_accept() {
        tcp_connection::pointer new_connection =
                tcp_connection::create(io_context_);

        acceptor_.async_accept(new_connection->socket(),
                               boost::bind(&tcp_server::handle_accept, this, new_connection,
                                           boost::asio::placeholders::error));
    }

    void handle_accept(tcp_connection::pointer new_connection,
                       const boost::system::error_code& error){
        if (!error) {
            new_connection->start();
        }

        start_accept();
    }

    boost::asio::io_context& io_context_;
    tcp::acceptor acceptor_;
};


#endif //MYCELIUM_SERVER_H
