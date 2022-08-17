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

#include "protocol.h"

#include "serverbound_chat_message.h"
#include "serverbound_click_container.h"
#include "serverbound_client_information.h"
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
}