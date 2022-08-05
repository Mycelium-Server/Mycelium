#include "mojangapi/http.h"
#include "pipeline/handlers.h"
#include "protocol/protocol.h"
#include "server.h"
#include "server/world/generation/flat_world_generator.h"
#include "server/world/world.h"
#include "time.h"

static GameServer* server;

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
  http_init();

  auto startTime = currentTimeMillis();
  World* world = m_default_dimensions[OVERWORLD].world;
  world->setWorldGenerator(new FlatWorldGenerator);
  world->createSpawnChunks();
  std::cout << "Generated " << world->chunks.size() << " chunks in " << (currentTimeMillis() - startTime) << "ms" << std::endl;

  server = new GameServer();
  if (server->isOnlineMode()) {
    server->generateKeypair();
  }

  protocol_registerPackets();
  tcp_start_server(pipelineInitializer, server->getServerIP().c_str(), server->getServerPort());
}