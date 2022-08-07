#include "play_packet_listener.h"

#include <iostream>

#include "../json.hpp"
#include "../protocol/clientbound_ack_block_change.h"
#include "../protocol/clientbound_block_update.h"
#include "../protocol/clientbound_chunk_data.h"
#include "../protocol/clientbound_set_center_chunk.h"
#include "../protocol/clientbound_set_head_rotation.h"
#include "../protocol/clientbound_system_message.h"
#include "../protocol/clientbound_update_entity_position.h"
#include "../protocol/clientbound_update_entity_position_rotation.h"
#include "../protocol/clientbound_update_entity_rotation.h"
#include "../protocol/plugin_channels.h"

PlayPacketListener::PlayPacketListener() = default;
PlayPacketListener::~PlayPacketListener() = default;

void PlayPacketListener::setTeleportID(int id) {
  teleportID = id;
}

void PlayPacketListener::handleClientInformation(ConnectionContext* ctx, ServerboundClientInformation* packet) {
  ctx->clientSettings = packet->settings;
}

void PlayPacketListener::handlePluginMessage(ConnectionContext* ctx, ServerboundPluginMessage* packet) {
  if (packet->channel == BRAND_CHANNEL) {
    ctx->clientBrand = packet->data.readString();
  }
}

void PlayPacketListener::handleConfirmTeleport(ConnectionContext*, ServerboundConfirmTeleportation* packet) {
  if (packet->teleportID != teleportID) {
    std::cerr << "Invalid teleport id" << std::endl;
    // TODO: Disconnect
  }
  teleportID = 0;
}

void PlayPacketListener::handleSetPlayerPosition(ConnectionContext* ctx, ServerboundSetPlayerPosition* packet) {
  ctx->playerEntity->setOnGround(packet->onGround);

  auto* update = new ClientboundUpdateEntityPosition();// TODO: Move this somewhere?
  update->entity = ctx->playerEntity;
  update->position = packet->location;               // TODO: Check if position is different
  for (auto& player: ctx->gameServer->getPlayers()) {// TODO: Check distance
    ConnectionContext* con = player->entity->connection;
    if (con != ctx) {
      con->write(update);
    }
  }
  delete update;

  handlePlayerPosition(ctx, packet->location);
}

void PlayPacketListener::handleSetPlayerPositionRotation(ConnectionContext* ctx, ServerboundSetPlayerPositionRotation* packet) {
  ctx->playerEntity->setOnGround(packet->onGround);

  auto* update = new ClientboundUpdateEntityPositionRotation();// TODO: Move this somewhere?
  update->entity = ctx->playerEntity;
  update->position = packet->location;

  auto* rotation = new ClientboundSetHeadRotation();
  rotation->entity = ctx->playerEntity;// TODO: Check if yaw is different
  rotation->yaw = packet->location.yaw;

  for (auto& player: ctx->gameServer->getPlayers()) {// TODO: Check distance
    ConnectionContext* con = player->entity->connection;
    if (con != ctx) {
      con->write(update);
      con->write(rotation);
    }
  }

  delete update;
  delete rotation;

  handlePlayerPosition(ctx, packet->location.position);
  handlePlayerRotation(ctx, packet->location.yaw, packet->location.pitch);
}

void PlayPacketListener::handleSetPlayerRotation(ConnectionContext* ctx, ServerboundSetPlayerRotation* packet) {
  ctx->playerEntity->setOnGround(packet->onGround);

  auto* update = new ClientboundUpdateEntityRotation();
  update->entity = ctx->playerEntity;
  update->yaw = packet->yaw;
  update->pitch = packet->pitch;

  auto* rotation = new ClientboundSetHeadRotation();
  rotation->entity = ctx->playerEntity;// TODO: Check if yaw is different
  rotation->yaw = packet->yaw;

  for (auto& player: ctx->gameServer->getPlayers()) {// TODO: Check distance
    ConnectionContext* con = player->entity->connection;
    if (con != ctx) {
      con->write(update);
      con->write(rotation);
    }
  }

  delete update;
  delete rotation;

  handlePlayerRotation(ctx, packet->yaw, packet->pitch);
}

void PlayPacketListener::handlePlayerPosition(ConnectionContext* ctx, const Position3d& position) {
  ChunkLocation current = World::getChunkLocation(position);
  if (current.x != chunkLocation.x || current.z != chunkLocation.z || std::floor(position.y) != std::floor(ctx->playerEntity->getLocation().position.position.y)) {
    auto* setCenter = new ClientboundSetCenterChunk();
    setCenter->location = current;
    ctx->write(setCenter);
    delete setCenter;
    chunkLocation = current;
  }
  ctx->playerEntity->location.position.position = position;

  int r = ctx->gameServer->getViewDistance();
  for (int x = -r; x <= r; x++) {
    for (int z = -r; z <= r; z++) {// Ensure that chunks are always loaded
      ChunkLocation loc = {x + current.x, z + current.z};
      unsigned long long id = (unsigned long long) loc.x << 32 | loc.z;
      if (std::find(loadedChunks.begin(), loadedChunks.end(), id) == loadedChunks.end()) {
        Chunk* chunk = ctx->playerEntity->location.dimension.world->requireChunk(loc);
        auto* packet = new ClientboundChunkData(chunk);
        ctx->write(packet);
        delete packet;
        loadedChunks.push_back(id);
      }
    }
  }
}

void PlayPacketListener::handlePlayerRotation(ConnectionContext* ctx, float yaw, float pitch) {
  ctx->playerEntity->location.position.yaw = yaw;
  ctx->playerEntity->location.position.pitch = pitch;
}

void PlayPacketListener::handleChatMessage(ConnectionContext* ctx, ServerboundChatMessage* packet) {
  // TODO: Check message length
  nlohmann::json jsonMsg;
  jsonMsg["text"] = "[" + ctx->playerData.name + "] " + packet->message;

  auto* msg = new ClientboundSystemMessage();// Always send system message (no chat reports)
  msg->message = nlohmann::to_string(jsonMsg);

  for (auto& player: ctx->gameServer->getPlayers()) {
    player->entity->connection->write(msg);
  }

  delete msg;
}

void PlayPacketListener::handleUseItemOn(ConnectionContext* ctx, ServerboundUseItemOn* packet) {
  int targetBlockID = 1;// TODO: Item -> Block
  Vector3i offset = BlockFaceOffsets[packet->face];
  int targetX = offset.x + packet->position.x;
  int targetZ = offset.z + packet->position.z;
  int targetY = offset.y + packet->position.y;
  // TODO: check Y
  ctx->playerEntity->location.dimension.world->setBlock(targetX, targetY, targetZ, targetBlockID);

  int d = ctx->gameServer->getViewDistance() * 32;
#define DIFF_CHECK(x, target) (std::abs(targetX - x) <= d)

  auto* block = new ClientboundBlockUpdate();
  block->location.x = targetX;
  block->location.y = targetY;
  block->location.z = targetZ;
  block->blockID = targetBlockID;

  auto* clicked = new ClientboundBlockUpdate();
  clicked->location = packet->position;
  clicked->blockID = ctx->playerEntity->location.dimension.world->getBlock(packet->position.x, packet->position.y, packet->position.z);

  auto* ack = new ClientboundAckBlockChange();
  ack->sequence = packet->sequence;

  for (auto& player: ctx->gameServer->getPlayers()) {
    int pX = (int) player->entity->location.position.position.x;
    int pY = (int) player->entity->location.position.position.y;
    int pZ = (int) player->entity->location.position.position.z;
    if (DIFF_CHECK(pX, targetX) && DIFF_CHECK(pY, targetY) && DIFF_CHECK(pZ, targetZ)) {
      player->entity->connection->write(block);
      player->entity->connection->write(ack);
    }
  }

  delete block;
  delete ack;

#undef DIFF_CHECK
}
