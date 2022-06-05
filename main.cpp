#include "packet/Packet.h"
#include "bedrock/packet/Packet.h"

int main()
{
    initialize_server();
    tcp_start_thread();
    udp_start_thread();
    while(1);
    return 0;
}