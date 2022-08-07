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

#include "packet.h"

class ClientboundPlayerAbilities : public ClientboundPacket {
 public:
  ClientboundPlayerAbilities();
  ~ClientboundPlayerAbilities();

 public:
  void write(ByteBuffer&) override;
  int getPacketID() const override;
  void construct(PlayerData);

 public:
  union {
    struct {
      char invulnerable : 1;
      char flying : 1;
      char allowFlying : 1;
      char creativeMode : 1;
      char unused : 4;
    };

    char value;
  } flags = {0};
  float flyingSpeed = 0;
  float fovModifier = 0;
};