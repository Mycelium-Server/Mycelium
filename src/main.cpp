/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mojangapi/http.h"
#include "pipeline/handlers.h"
#include "protocol/protocol.h"
#include "server.h"
#include "server/blocks/block_registry.h"
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
  std::cout << "Creating block registry... ";
  BlockRegistry::init();
  std::cout << "done" << std::endl;
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