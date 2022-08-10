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

#include "serverbound_click_container.h"

#include "../listeners/play_packet_listener.h"

ServerboundClickContainer::ServerboundClickContainer() = default;
ServerboundClickContainer::~ServerboundClickContainer() = default;

void ServerboundClickContainer::read(ByteBuffer& buf) {
  windowID = buf.readByte();
  stateID = buf.readVarInt();
  slot = buf.readShort();
  button = buf.readByte();
  mode = buf.readVarInt();
  slots.resize(buf.readVarInt());
  for (auto& s: slots) {
    s.number = buf.readShort();
    s.data = buf.readItemStack();
  }
  carriedItem = buf.readItemStack();

  switch (mode) {
    case 0:
      if (button == 0) {
        type = slot == -999 ? DROP_STACK : LEFT_CLICK;
      } else if(button == 1) {
        type = slot == -999 ? DROP_SINGLE_ITEM : RIGHT_CLICK;
      }
      break;

    case 1:
      type = button == 0 ? SHIFT_LEFT_CLICK : SHIFT_RIGHT_CLICK;
      break;

    case 2:
      switch (button) {
        case 0:
          type = NUM_KEY_1;
          break;

        case 1:
          type = NUM_KEY_2;
          break;

        case 2:
          type = NUM_KEY_3;
          break;

        case 3:
          type = NUM_KEY_4;
          break;

        case 4:
          type = NUM_KEY_5;
          break;

        case 5:
          type = NUM_KEY_6;
          break;

        case 6:
          type = NUM_KEY_7;
          break;

        case 7:
          type = NUM_KEY_8;
          break;

        case 8:
          type = NUM_KEY_9;
          break;

        case 40:
          type = OFFHAND_SWAP;
          break;
      }
      break;

    case 3:
      type = MIDDLE_CLICK;
      break;

    case 4:
      type = button == 0 ? DROP_KEY : CONTROL_DROP_KEY;
      break;

    case 5:
      switch (button) {
        case 0:
          type = START_LEFT_MOUSE_DRAG;
          break;

        case 4:
          type = START_RIGHT_MOUSE_DRAG;
          break;

        case 8:
          type = START_MIDDLE_MOUSE_DRAG;
          break;

        case 1:
          type = ADD_LEFT_MOUSE_DRAG_SLOT;
          break;

        case 5:
          type = ADD_RIGHT_MOUSE_DRAG_SLOT;
          break;

        case 9:
          type = ADD_MIDDLE_MOUSE_DRAG_SLOT;
          break;

        case 2:
          type = END_LEFT_MOUSE_DRAG;
          break;

        case 3:
          type = END_RIGHT_MOUSE_DRAG;
          break;

        case 10:
          type = END_MIDDLE_MOUSE_DRAG;
          break;
      }
      break;

    case 6:
      type = DOUBLE_CLICK;
      break;
  }
}

ServerboundPacket* ServerboundClickContainer::createInstance() {
  return new ServerboundClickContainer;
}

int ServerboundClickContainer::getPacketID() const {
  return 0x0B;
}

void ServerboundClickContainer::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleClickContainer(ctx, this);
  }
  delete this;
}
