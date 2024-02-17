

#include "mojangapi/http.h"
#include "network/pipeline/handlers.h"
#include "network/protocol/protocol.h"
#include "server.h"
#include "world/block/builtin/block_registry.h"
#include "server/command/command_graph.h"
#include "server/command/vanilla/kick_command.h"
#include "server/dimension.h"
#include "world/item/builtin/item_registry.h"
#include "world/level/generation/noise_world_generator.h"
#include "world/level/world.h"
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
  std::cout << "Creating registries... ";
  BlockRegistry::init();
  ItemRegistry::init();
  std::cout << "done" << std::endl;
  http_init();

  auto startTime = currentTimeMillis();
  World* world = m_default_dimensions[OVERWORLD].world;
  world->setWorldGenerator(new NoiseWorldGenerator);
  world->createSpawnChunks();
  std::cout << "Generated " << world->chunks.size() << " chunks in " << (currentTimeMillis() - startTime) << "ms" << std::endl;

  server = new GameServer();
  if (server->isOnlineMode()) {
    server->generateKeypair();
  }

  server->registerCommand("kick", new KickCommand);

  protocol_registerPackets();
  tcp_start_server(pipelineInitializer, server->getServerIP().c_str(), server->getServerPort());
}