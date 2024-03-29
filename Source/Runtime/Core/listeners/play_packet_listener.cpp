

#include "play_packet_listener.h"

#include <iostream>
#include <nlohmann/json.hpp>
#include <regex>

#include "../network/protocol/game/clientbound_ack_block_change.h"
#include "../network/protocol/game/clientbound_block_update.h"
#include "../network/protocol/game/clientbound_chunk_data.h"
#include "../network/protocol/game/clientbound_entity_animation.h"
#include "../network/protocol/game/clientbound_set_center_chunk.h"
#include "../network/protocol/game/clientbound_set_entity_metadata.h"
#include "../network/protocol/game/clientbound_set_head_rotation.h"
#include "../network/protocol/game/clientbound_suggestions_response.h"
#include "../network/protocol/game/clientbound_system_message.h"
#include "../network/protocol/game/clientbound_unload_chunk.h"
#include "../network/protocol/game/clientbound_update_entity_position.h"
#include "../network/protocol/game/clientbound_update_entity_position_rotation.h"
#include "../network/protocol/game/clientbound_update_entity_rotation.h"
#include "../network/protocol/plugin_channels.h"
#include "../server/dimension.h"
#include "../world/entity/metadata/player_metadata.h"
#include "../world/item/builtin/block_item.h"
#include "../world/item/builtin/item_registry.h"

PlayPacketListener::PlayPacketListener() = default;
PlayPacketListener::~PlayPacketListener() = default;

void PlayPacketListener::setTeleportID(int id) {
  teleportID = id;
}

void PlayPacketListener::handleClientInformation(ConnectionContext* ctx, ServerboundClientInformation* packet) {
  ClientSettings& settings = packet->settings;
  auto* metadata = ctx->playerEntity->getMetadata<PlayerMetadata>();

  ctx->clientSettings = packet->settings;

  metadata->displayedSkinParts = settings.displayedSkinParts;
  metadata->mainHand = settings.mainHand;

  auto* metadataPacket = new ClientboundSetEntityMetadata();
  metadataPacket->entity = ctx->playerEntity;
  for (auto* player: ctx->gameServer->getPlayers()) {
    player->entity->connection->write(metadataPacket);
  }
  delete metadataPacket;
}

void PlayPacketListener::handlePluginMessage(ConnectionContext* ctx, ServerboundPluginMessage* packet) {
  if (packet->channel == BRAND_CHANNEL) {
    ctx->clientBrand = packet->data.readString();
  }
}

void PlayPacketListener::handleConfirmTeleport(ConnectionContext* ctx, ServerboundConfirmTeleportation* packet) {
  if (packet->teleportID != teleportID) {
    ctx->gameServer->disconnectRaw(&ctx->playerData, R"({"text":"Invalid teleport ID.","color":"red"})");
    return;
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
  EntityPlayer* player = ctx->playerEntity;
  Location& location = player->getLocation();
  World* world = location.dimension->world;
  ChunkLocation current = world->getChunkLocation(position);
  location.setPosition(position);

  bool updateChunks = current.x != chunkLocation.x || current.z != chunkLocation.z;
  if (updateChunks || std::floor(position.y) == std::floor(location.y)) {
    auto* setCenter = new ClientboundSetCenterChunk();
    setCenter->location = current;
    ctx->write(setCenter);
    delete setCenter;

    chunkLocation = current;
  }

  if (!updateChunks) {
    return;
  }

  std::unordered_set<uint64_t> currentChunks;

  int radius = player->getRenderDistance();
  for (int x = -radius; x <= radius; x++) {
    for (int z = -radius; z <= radius; z++) {
      ChunkLocation loc = {player->location.dimension->world, x + current.x, z + current.z};
      uint64_t id = loc.getID();
      currentChunks.insert(id);
    }
  }

  for (auto it = loadedChunks.begin(); it != loadedChunks.end();) {
    uint64_t id = *it;
    if (currentChunks.erase(id) == 0) {
      ClientboundUnloadChunk unloadChunk;
      unloadChunk.location.fromID(id);
      it = loadedChunks.erase(it);
    } else {
      ++it;
    }
  }

  for (const uint64_t currentChunk : currentChunks) {
    ChunkLocation loc;
    loc.fromID(currentChunk);
    ClientboundChunkData chunkData(loc.world->requireChunk(loc));
    ctx->write(&chunkData);
    loadedChunks.insert(currentChunk);
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

      Chunk* targetChunk = world->requireChunk(world->getChunkLocation(target));
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
        Chunk* targetChunk = world->requireChunk(world->getChunkLocation(packet->location));
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

static void splitCommand(const std::string& text, std::string& command, std::vector<std::string>& args) {
  std::regex r("\\s+");
  auto sbegin = text.begin();
  if (!text.empty() && text[0] == '/') {
    sbegin++;
  }
  std::sregex_token_iterator begin {sbegin, text.end(), r, -1}, end;
  command = *begin++;
  args = {begin, end};
}

void PlayPacketListener::handleCommandSuggestionRequest(ConnectionContext* ctx, ServerboundCommandSuggestionRequest* packet) {
  std::string command;
  std::vector<std::string> args;
  splitCommand(packet->text, command, args);

  auto& commands = ctx->gameServer->getCommands();
  auto it = commands.find(command);
  if (it != commands.end()) {
    Command* cmd = it->second;
    auto suggestions = cmd->suggest(ctx, args);
    if (!suggestions.empty()) {
      std::unordered_map<std::string, std::optional<std::string>> matches;

      for (const auto& p: suggestions) {
        if (args.empty() || p.first.rfind(*(args.end() - 1), 0) == 0) {
          matches[p.first] = p.second;
        }
      }

      if (!matches.empty()) {
        auto* response = new ClientboundSuggestionsResponse();
        response->start = (int) packet->text.rfind(' ') + 1;
        response->length = (int) packet->text.length() - response->start;
        response->matches = suggestions;
        response->transactionID = packet->transactionID;
        ctx->write(response);
        delete response;
      }
    }
  }
}

void PlayPacketListener::handleChatCommand(ConnectionContext* ctx, ServerboundChatCommand* packet) {
  std::vector<std::string> plainArgs;
  std::string command;
  splitCommand(packet->command, command, plainArgs);

  auto& commands = ctx->gameServer->getCommands();
  auto it = commands.find(command);
  if (it != commands.end()) {

    for (const auto& arg: packet->arguments) {
      plainArgs.push_back(arg.argument);
    }

    std::cout << ctx->playerData.name << " issued command: " << command;
    for (const auto& arg: plainArgs) {
      std::cout << ' ' << arg;
    }
    std::cout << std::endl;

    it->second->execute(ctx, plainArgs);
  }
}
