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

#include "clientbound_set_equipment.h"

ClientboundSetEquipment::ClientboundSetEquipment() = default;
ClientboundSetEquipment::~ClientboundSetEquipment() = default;

void ClientboundSetEquipment::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());

  auto it = equipment.begin();
  while (it != equipment.end()) {
    unsigned char slot = it->first;
    ItemStack is = it->second;

    it++;
    if (it != equipment.end()) {
      slot |= 1 << 7;
    }

    buf.writeByte(slot);
    buf.writeItemStack(is);
  }
}

int ClientboundSetEquipment::getPacketID() const {
  return 0x53;
}

void ClientboundSetEquipment::addAll(PlayerInventory& inventory) {
  equipment[HELMET] = inventory.getHelmet();
  equipment[CHESTPLATE] = inventory.getChestplate();
  equipment[LEGGINGS] = inventory.getLeggings();
  equipment[BOOTS] = inventory.getBoots();
  equipment[MAIN_HAND] = inventory.getActiveSlotData();
  equipment[OFF_HAND] = inventory.getOffHandItem();
}

void ClientboundSetEquipment::addAll(EntityPlayer* player) {
  entity = player;
  addAll(player->getInventory());
}