#pragma once

#include "../connection_context.h"
#include "../protocol/serverbound_chat_command.h"
#include "../protocol/serverbound_chat_message.h"
#include "../protocol/serverbound_click_container.h"
#include "../protocol/serverbound_client_information.h"
#include "../protocol/serverbound_command_suggestion_request.h"
#include "../protocol/serverbound_confirm_teleportation.h"
#include "../protocol/serverbound_player_action.h"
#include "../protocol/serverbound_plugin_message.h"
#include "../protocol/serverbound_set_creative_mode_slot.h"
#include "../protocol/serverbound_set_held_item.h"
#include "../protocol/serverbound_set_player_position.h"
#include "../protocol/serverbound_set_player_position_rotation.h"
#include "../protocol/serverbound_set_player_rotation.h"
#include "../protocol/serverbound_swing_arm.h"
#include "../protocol/serverbound_use_item_on.h"
#include "../server/world/world.h"
#include <unordered_set>

class PlayPacketListener {
 public:
  PlayPacketListener();
  ~PlayPacketListener();

 public:
  void setTeleportID(int);

 public:
  void handleClientInformation(ConnectionContext*, ServerboundClientInformation*);
  void handlePluginMessage(ConnectionContext*, ServerboundPluginMessage*);
  void handleConfirmTeleport(ConnectionContext*, ServerboundConfirmTeleportation*);
  void handleSetPlayerPosition(ConnectionContext*, ServerboundSetPlayerPosition*);
  void handleSetPlayerPositionRotation(ConnectionContext*, ServerboundSetPlayerPositionRotation*);
  void handleSetPlayerRotation(ConnectionContext*, ServerboundSetPlayerRotation*);
  void handleChatMessage(ConnectionContext*, ServerboundChatMessage*);
  void handleUseItemOn(ConnectionContext*, ServerboundUseItemOn*);
  void handleClickContainer(ConnectionContext*, ServerboundClickContainer*);
  void handleSetCreativeModeSlot(ConnectionContext*, ServerboundSetCreativeModeSlot*);
  void handleSetHeldItem(ConnectionContext*, ServerboundSetHeldItem*);
  void handlePlayerAction(ConnectionContext*, ServerboundPlayerAction*);
  void handleSwingArm(ConnectionContext*, ServerboundSwingArm*);
  void handleCommandSuggestionRequest(ConnectionContext*, ServerboundCommandSuggestionRequest*);
  void handleChatCommand(ConnectionContext*, ServerboundChatCommand*);
  // TODO: 0x17 packet

 private:
  void handlePlayerPosition(ConnectionContext*, const EntityPosition&);
  void handlePlayerRotation(ConnectionContext*, float, float);

 public:
  std::unordered_set<uint64_t> loadedChunks;

 private:
  int teleportID = 0;
  ChunkLocation chunkLocation {};
};