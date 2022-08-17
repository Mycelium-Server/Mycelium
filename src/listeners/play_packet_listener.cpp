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

#include "play_packet_listener.h"

#include <iostream>

#include "../json.hpp"
#include "../protocol/clientbound_ack_block_change.h"
#include "../protocol/clientbound_block_update.h"
#include "../protocol/clientbound_chunk_data.h"
#include "../protocol/clientbound_entity_animation.h"
#include "../protocol/clientbound_set_center_chunk.h"
#include "../protocol/clientbound_set_head_rotation.h"
#include "../protocol/clientbound_system_message.h"
#include "../protocol/clientbound_update_entity_position.h"
#include "../protocol/clientbound_update_entity_position_rotation.h"
#include "../protocol/clientbound_update_entity_rotation.h"
#include "../protocol/plugin_channels.h"
#include "../server/dimension.h"
#include "../server/item/block_item.h"
#include "../server/item/item_registry.h"

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
    std::cerr << "Invalid teleport ID" << std::endl;
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

  handlePlayerPosition(ctx, packet->location);
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

void PlayPacketListener::handlePlayerPosition(ConnectionContext* ctx, const EntityPosition& position) {
  ChunkLocation current = World::getChunkLocation(position);

  EntityPlayer* player = ctx->playerEntity;
  Location& location = player->getLocation();
  World* world = location.dimension->world;

  if (current.x != chunkLocation.x || current.z != chunkLocation.z || std::floor(position.y) != std::floor(location.y)) {
    auto* setCenter = new ClientboundSetCenterChunk();
    setCenter->location = current;
    ctx->write(setCenter);
    delete setCenter;

    chunkLocation = current;
  }
  location.setPosition(position);

  int r = player->getRenderDistance() - 1;
  for (int x = -r; x <= r; x++) {
    for (int z = -r; z <= r; z++) {// Ensure that chunks are always loaded
      ChunkLocation loc = {x + current.x, z + current.z};
      unsigned long long id = loc.getID();
      if (std::find(loadedChunks.begin(), loadedChunks.end(), id) == loadedChunks.end()) {
        Chunk* chunk = world->requireChunk(loc);
        auto* packet = new ClientboundChunkData(chunk);
        ctx->write(packet);
        delete packet;
        loadedChunks.push_back(id);
      }
    }
  }
}

void PlayPacketListener::handlePlayerRotation(ConnectionContext* ctx, float yaw, float pitch) {
  EntityPlayer* player = ctx->playerEntity;
  Location& location = player->getLocation();
  location.yaw = yaw;
  location.pitch = pitch;
}

void PlayPacketListener::handleChatMessage(ConnectionContext* ctx, ServerboundChatMessage* packet) {
  // TODO: Check message length
  nlohmann::json jsonMsg;
  std::string message = "[" + ctx->playerData.name + "] " + packet->message;
  jsonMsg["text"] = message;
  std::cout << message << std::endl;

  auto* msg = new ClientboundSystemMessage();// Always send system message (no chat reports)
  msg->message = nlohmann::to_string(jsonMsg);

  for (auto& player: ctx->gameServer->getPlayers()) {
    player->entity->connection->write(msg);
  }

  delete msg;
}

void PlayPacketListener::handleUseItemOn(ConnectionContext* ctx, ServerboundUseItemOn* packet) {
  EntityPlayer* player = ctx->playerEntity;

  ItemStack& mainHand = player->getInventory().getActiveSlotData();
  ItemStack& offHand = player->getInventory().getOffHandItem();

  if (mainHand.present || offHand.present) {
    ItemStack& is = mainHand.present ? mainHand : offHand;
    auto item = ItemRegistry::fromID(is.itemID);
    if (item->isBlockItem()) {
      // TODO: Check if player is trying to place block
      Vector3i offset = BlockFaceOffsets[packet->face];

      int targetX = offset.x + packet->position.x;
      int targetZ = offset.z + packet->position.z;
      int targetY = offset.y + packet->position.y;
      BlockPosition target = {targetX, targetY, targetZ};

      auto* blockItem = (BlockItem*) item.get();
      Location& location = player->getLocation();
      Dimension* dimension = location.dimension;
      World* world = dimension->world;

      // TODO: check Y
      int targetBlockID =
          blockItem->getBlockID(
              world,
              target,
              {/* TODO: Player eye position */},
              packet->face,
              packet->cursor,
              packet->insideBlock);

      Chunk* targetChunk = world->requireChunk(World::getChunkLocation(target));
      world->setBlock(target, targetBlockID);

      auto* block = new ClientboundBlockUpdate();
      block->location = target;
      block->blockID = targetBlockID;

      auto* clicked = new ClientboundBlockUpdate();
      clicked->location = packet->position;
      clicked->blockID = world->getBlock(packet->position);

      auto* ack = new ClientboundAckBlockChange();
      ack->sequence = packet->sequence;

      for (auto& p: ctx->gameServer->getPlayers()) {
        EntityPlayer* entity = p->entity;
        if (entity->isChunkLoaded(targetChunk)) {
          ConnectionContext* con = entity->connection;
          con->write(clicked);
          con->write(block);
          con->write(ack);
        }
      }

      delete clicked;
      delete block;
      delete ack;
    }
  } else {
    // TODO: Handle interact
  }
}

void PlayPacketListener::handleClickContainer(ConnectionContext*, ServerboundClickContainer*) {
  // TODO: Implementation
}

void PlayPacketListener::handleSetCreativeModeSlot(ConnectionContext* ctx, ServerboundSetCreativeModeSlot* packet) {
  PlayerInventory& target = ctx->playerEntity->getInventory();
  if (packet->slot < 0 || packet->slot >= target.getSize()) {
    return;
  }
  target.set(packet->slot, packet->clickedItem);
}

void PlayPacketListener::handleSetHeldItem(ConnectionContext* ctx, ServerboundSetHeldItem* packet) {
  PlayerInventory& target = ctx->playerEntity->getInventory();
  target.setActiveSlot(packet->slot, false);
  target.updateEquipment(packet->slot + 36, true);
}

void PlayPacketListener::handlePlayerAction(ConnectionContext* ctx, ServerboundPlayerAction* packet) {
  switch (packet->status) {
    case ServerboundPlayerAction::SWAP_ITEM_IN_HAND: {
      PlayerInventory& inv = ctx->playerEntity->getInventory();
      inv.set(36 + inv.getActiveSlot(), inv.set(45, inv.getActiveSlotData(), true), true);
      break;
    }

    case ServerboundPlayerAction::STARTED_DIGGING: {
      if (ctx->playerData.gamemode == Gamemode::CREATIVE) {
        World* world = ctx->playerEntity->location.dimension->world;
        Chunk* targetChunk = world->requireChunk(World::getChunkLocation(packet->location));
        world->setBlock(packet->location, 0);

        auto* block = new ClientboundBlockUpdate();
        block->location = packet->location;
        block->blockID = 0;

        for (auto& p: ctx->gameServer->getPlayers()) {
          EntityPlayer* entity = p->entity;
          if (entity->isChunkLoaded(targetChunk)) {
            ConnectionContext* con = entity->connection;
            // TODO: Particle
            con->write(block);
          }
        }

        delete block;
      }
      break;
    }

    default:
      break;
  }
}

void PlayPacketListener::handleSwingArm(ConnectionContext* ctx, ServerboundSwingArm* packet) {
  auto* animation = new ClientboundEntityAnimation;
  animation->target = ctx->playerEntity;
  animation->animation =
      packet->hand ? ClientboundEntityAnimation::SWING_OFFHAND
                   : ClientboundEntityAnimation::SWING_MAIN_ARM;

  for (auto& p: ctx->gameServer->getPlayers()) {
    if (p->entity == ctx->playerEntity) {
      continue;
    }

    // TODO: Check distance

    ConnectionContext* con = p->entity->connection;
    con->write(animation);
  }

  delete animation;
}
