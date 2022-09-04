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

#include "clientbound_login_success.h"

ClientboundLoginSuccess::ClientboundLoginSuccess() = default;
ClientboundLoginSuccess::~ClientboundLoginSuccess() = default;

void ClientboundLoginSuccess::write(ByteBuffer& dst) {
  dst.writeUUID(uuid);
  dst.writeString(name);
  dst.writeVarInt((int) properties.size());
  for (auto& property: properties) {
    dst.writeString(property.name);
    dst.writeString(property.value);
    dst.writeByte(property.signature.has_value());
    if (property.signature.has_value()) {
      dst.writeString(property.signature.value());
    }
  }
}

int ClientboundLoginSuccess::getPacketID() const {
  return 0x02;
}