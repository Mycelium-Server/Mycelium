#include "server.h"

Pipeline* pipelineInitializer(ConnectionContext* ctx) {
    std::cout << "Connected client" << std::endl;
    return new Pipeline();
}

int main() {
    tcp_start_server(pipelineInitializer, "0.0.0.0", 25565); // TODO: Add input
}