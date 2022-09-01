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

#include "clientbound_suggestions_response.h"

ClientboundSuggestionsResponse::ClientboundSuggestionsResponse() = default;
ClientboundSuggestionsResponse::~ClientboundSuggestionsResponse() = default;

void ClientboundSuggestionsResponse::write(ByteBuffer& buf) {
  buf.writeVarInt(transactionID);
  buf.writeVarInt(start);
  buf.writeVarInt(length);
  buf.writeVarInt((int) matches.size());
  for (const auto& pair: matches) {
    buf.writeString(pair.first);
    buf.writeByte(pair.second.has_value());
    if (pair.second.has_value()) {
      buf.writeString(pair.second.value());
    }
  }
}

int ClientboundSuggestionsResponse::getPacketID() const {
  return 0x0E;
}
