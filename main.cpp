#include "Server.h"
#include "packet/Packet.h" // Required to compile

int main()
{
    boost::asio::io_context io_context;
    Server srv(io_context, 25565);
    srv.async_accept();
    io_context.run();
    return 0;
}