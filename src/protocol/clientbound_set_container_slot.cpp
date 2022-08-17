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

#include "clientbound_set_container_slot.h"

ClientboundSetContainerSlot::ClientboundSetContainerSlot() = default;
ClientboundSetContainerSlot::~ClientboundSetContainerSlot() = default;

void ClientboundSetContainerSlot::write(ByteBuffer& buf) {
  buf.writeByte(windowID);
  buf.writeVarInt(stateID);
  buf.writeShort(slot);
  buf.writeItemStack(slotData);
}

int ClientboundSetContainerSlot::getPacketID() const {
  return 0x13;
}

void ClientboundSetContainerSlot::construct(AbstractContainer& c, short s) {
  windowID = c.getID();
  slot = s;
  slotData = c.get(slot);
}

void ClientboundSetContainerSlot::construct(PlayerInventory& inv, short s, bool force) {
  if (force) {
    windowID = -2;
  } else if (inv.getMenu()) {
    windowID = inv.getMenu()->getID();
  } else {
    windowID = inv.getInventoryContainer().getID();
  }

  slot = s;
  slotData = inv.get(s, force);
}
