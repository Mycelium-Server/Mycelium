#include "Server.h"
#include "packet/Packet.h" // Required to compile
#include "server/Server.h"

int main()
{
    printf("Running server...\n");
    initialize_server();
    start();
    return 0;
}