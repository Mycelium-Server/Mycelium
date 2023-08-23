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

#include "../server/face.h"
#include "packet.h"

class ServerboundPlayerAction : public ServerboundPacket {
 public:
  ServerboundPlayerAction();
  ~ServerboundPlayerAction();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  enum {
    STARTED_DIGGING = 0,
    CANCELLED_DIGGING = 1,
    FINISHED_DIGGING = 2,
    DROP_ITEM_STACK = 3,
    DROP_ITEM = 4,
    USE_ITEM = 5,
    SWAP_ITEM_IN_HAND = 6,
    UNDEFINED = -1,
  } status = UNDEFINED;
  BlockPosition location;
  BlockFace face = (BlockFace) 0;
  int sequence = 0;

};