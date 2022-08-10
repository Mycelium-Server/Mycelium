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

#include "serverbound_set_creative_mode_slot.h"

#include "../listeners/play_packet_listener.h"

ServerboundSetCreativeModeSlot::ServerboundSetCreativeModeSlot() = default;
ServerboundSetCreativeModeSlot::~ServerboundSetCreativeModeSlot() = default;

void ServerboundSetCreativeModeSlot::read(ByteBuffer& buf) {
  slot = buf.readShort();
  clickedItem = buf.readItemStack();
}

ServerboundPacket* ServerboundSetCreativeModeSlot::createInstance() {
  return new ServerboundSetCreativeModeSlot;
}

int ServerboundSetCreativeModeSlot::getPacketID() const {
  return 0x2B;
}

void ServerboundSetCreativeModeSlot::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSetCreativeModeSlot(ctx, this);
  }
  delete this;
}