

#include "protocol.h"

#include "serverbound_chat_command.h"
#include "serverbound_chat_message.h"
#include "serverbound_click_container.h"
#include "serverbound_client_information.h"
#include "serverbound_command_suggestion_request.h"
#include "serverbound_handshake.h"
#include "serverbound_keepalive.h"
#include "serverbound_player_action.h"
#include "serverbound_plugin_message.h"
#include "serverbound_set_creative_mode_slot.h"
#include "serverbound_set_held_item.h"
#include "serverbound_set_player_position.h"
#include "serverbound_set_player_position_rotation.h"
#include "serverbound_set_player_rotation.h"
#include "serverbound_swing_arm.h"
#include "serverbound_use_item_on.h"

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