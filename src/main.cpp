#include "server.h"
#include "pipeline/handlers.h"
#include "protocol/protocol.h"

GameServer* server;

Pipeline* pipelineInitializer(ConnectionContext* ctx) {
    Pipeline* pipeline = new Pipeline();

    ctx->gameServer = server;

    pipeline->addLast("packet_splitter", new PacketSplitter());
    pipeline->addLast("packet_decoder", new PacketDecoder());

    pipeline->addLast("packet_encoder", new PacketEncoder());
    pipeline->addLast("packet_prepender", new PacketPrepender());

    pipeline->addLast("packet_handler", new PacketHandler());

    return pipeline;
}

int main() {
    server = new GameServer();
    protocol_registerPackets();
    tcp_start_server(pipelineInitializer, "0.0.0.0", 25565); // TODO: Add input
}