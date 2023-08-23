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

#include "packet.h"

class ClientboundEntityAnimation : public ClientboundPacket {
 public:
  ClientboundEntityAnimation();
  ~ClientboundEntityAnimation();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Entity* target = nullptr;
  enum {
    SWING_MAIN_ARM = 0,
    TAKE_DAMAGE = 1,
    LEAVE_BED = 2,
    SWING_OFFHAND = 3,
    CRITICAL_EFFECT = 4,
    MAGIC_CRITICAL_EFFECT = 5,
  } animation = SWING_MAIN_ARM;
};