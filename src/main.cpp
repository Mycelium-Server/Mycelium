#include "server.h"
#include "server/world/world.h"
#include "pipeline/handlers.h"
#include "protocol/protocol.h"
#include "time.h"

GameServer* server;

Pipeline* pipelineInitializer(ConnectionContext* ctx) {
    auto* pipeline = new Pipeline();

    ctx->gameServer = server;

    pipeline->addLast("packet_splitter", new PacketSplitter());
    pipeline->addLast("packet_decoder", new PacketDecoder());

    pipeline->addLast("packet_encoder", new PacketEncoder());
    pipeline->addLast("packet_prepender", new PacketPrepender());

    pipeline->addLast("packet_handler", new PacketHandler());

    return pipeline;
}

int main() {
    auto startTime = currentTimeMillis();
    World* world = m_default_dimensions[OVERWORLD].world;
    world->createSpawnChunks();
    for (int x = -3 * 16; x <= 3 * 16; x++) {
        for (int z = -3 * 16; z <= 3 * 16; z++) {
            world->setBlock(x, 4, z, 9);
            world->setBlock(x, 3, z, 1);
            world->setBlock(x, 2, z, 1);
            world->setBlock(x, 1, z, 1);
            world->setBlock(x, 0, z, 74);
        }
    }
    std::cout << "Created 49 chunks in " << (currentTimeMillis() - startTime) << "ms" << std::endl;

    server = new GameServer();
    protocol_registerPackets();
    tcp_start_server(pipelineInitializer, "0.0.0.0", 25577); // TODO: Add input
}