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

#include "serverbound_client_information.h"

#include "../listeners/play_packet_listener.h"

ServerboundClientInformation::ServerboundClientInformation() = default;
ServerboundClientInformation::~ServerboundClientInformation() = default;

void ServerboundClientInformation::read(ByteBuffer& in) {
  settings.locale = in.readString();
  settings.viewDistance = in.readByte();
  settings.chatMode = (ChatMode) in.readVarInt();
  settings.chatColors = in.readByte();
  settings.displayedSkinParts.value = in.readByte();
  settings.mainHand = (MainHand) in.readVarInt();
  settings.enableTextFiltering = in.readByte();
  settings.allowServerListings = in.readByte();
}

ServerboundPacket* ServerboundClientInformation::createInstance() {
  return new ServerboundClientInformation();
}

int ServerboundClientInformation::getPacketID() const {
  return 0x08;
}

void ServerboundClientInformation::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleClientInformation(ctx, this);
  }
  delete this;
}