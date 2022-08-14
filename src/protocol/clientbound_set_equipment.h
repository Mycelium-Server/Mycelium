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

class ClientboundSetEquipment : public ClientboundPacket {
 public:
  ClientboundSetEquipment();
  ~ClientboundSetEquipment();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;
  void addAll(PlayerInventory&);
  void addAll(EntityPlayer*);

 public:
  enum EquipmentType {
    MAIN_HAND = 0,
    OFF_HAND = 1,
    BOOTS = 2,
    LEGGINGS = 3,
    CHESTPLATE = 4,
    HELMET = 5,
  };

  Entity* entity;
  std::unordered_map<EquipmentType, ItemStack> equipment;

};