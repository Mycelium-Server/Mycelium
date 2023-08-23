/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

#pragma once

#include "../server/slot.h"
#include "packet.h"

class ServerboundClickContainer : public ServerboundPacket {
 public:
  ServerboundClickContainer();
  ~ServerboundClickContainer();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  uint8_t windowID = 0;
  int stateID = 0;
  short slot = 0;
  uint8_t button = 0;
  int mode = 0;
  std::vector<Slot> slots;
  ItemStack carriedItem;

  enum {
    LEFT_CLICK,
    RIGHT_CLICK,
    DROP_STACK,
    DROP_SINGLE_ITEM,
    SHIFT_LEFT_CLICK,
    SHIFT_RIGHT_CLICK,
    NUM_KEY_1,
    NUM_KEY_2,
    NUM_KEY_3,
    NUM_KEY_4,
    NUM_KEY_5,
    NUM_KEY_6,
    NUM_KEY_7,
    NUM_KEY_8,
    NUM_KEY_9,
    OFFHAND_SWAP,
    MIDDLE_CLICK,
    DROP_KEY,
    CONTROL_DROP_KEY,
    START_LEFT_MOUSE_DRAG,
    START_RIGHT_MOUSE_DRAG,
    START_MIDDLE_MOUSE_DRAG,
    ADD_LEFT_MOUSE_DRAG_SLOT,
    ADD_RIGHT_MOUSE_DRAG_SLOT,
    ADD_MIDDLE_MOUSE_DRAG_SLOT,
    END_LEFT_MOUSE_DRAG,
    END_RIGHT_MOUSE_DRAG,
    END_MIDDLE_MOUSE_DRAG,
    DOUBLE_CLICK,
    UNDEFINED
  } type = UNDEFINED;
};