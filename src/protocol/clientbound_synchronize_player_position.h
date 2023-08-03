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

#pragma once

#include "../server/location.h"
#include "packet.h"

class ClientboundSynchronizePlayerPosition : public ClientboundPacket {
 public:
  ClientboundSynchronizePlayerPosition();
  ~ClientboundSynchronizePlayerPosition();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Location location {};
  union {
    struct {
      uint8_t isRelativeX : 1;
      uint8_t isRelativeY : 1;
      uint8_t isRelativeZ : 1;
      uint8_t isRelativeRotY : 1;
      uint8_t isRelativeRotX : 1;
      uint8_t unused : 3;
    };

    uint8_t value = 0;
  } flags {};
  int teleportId = 0;
  bool dismountVehicle = false;
};