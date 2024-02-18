

#include "protocol.h"

#include "common/serverbound_client_information.h"
#include "common/serverbound_keepalive.h"
#include "game/serverbound_chat_command.h"
#include "game/serverbound_chat_message.h"
#include "game/serverbound_click_container.h"
#include "game/serverbound_command_suggestion_request.h"
#include "game/serverbound_player_action.h"
#include "game/serverbound_plugin_message.h"
#include "game/serverbound_set_creative_mode_slot.h"
#include "game/serverbound_set_held_item.h"
#include "game/serverbound_set_player_position.h"
#include "game/serverbound_set_player_position_rotation.h"
#include "game/serverbound_set_player_rotation.h"
#include "game/serverbound_swing_arm.h"
#include "game/serverbound_use_item_on.h"
#include "serverbound_handshake.h"

void protocol_registerPackets() {
  ServerboundHandshake().registerPacket();
  ServerboundClientInformation().registerPacket();
  ServerboundPluginMessage().registerPacket();
  ServerboundKeepAlive().registerPacket();
  ServerboundSetPlayerPosition().registerPacket();
  ServerboundSetPlayerPositionRotation().registerPacket();
  ServerboundSetPlayerRotation().registerPacket();
  ServerboundChatMessage().registerPacket();
  ServerboundUseItemOn().registerPacket();
  ServerboundClickContainer().registerPacket();
  ServerboundSetCreativeModeSlot().registerPacket();
  ServerboundSetHeldItem().registerPacket();
  ServerboundPlayerAction().registerPacket();
  ServerboundSwingArm().registerPacket();
  ServerboundCommandSuggestionRequest().registerPacket();
  ServerboundChatCommand().registerPacket();
}