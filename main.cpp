#include "Server.h"
#include "packet/Packet.h" // Required to compile

int main()
{
    printf("Running on port 25565\n");
    boost::asio::io_context context;
    tcp_server srv(context, 25565);
    context.run();
    return 0;
}