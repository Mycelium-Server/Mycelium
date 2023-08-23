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

#include "../connection_context.h"
#include "handlers.h"

PacketDecompressor::PacketDecompressor() = default;
PacketDecompressor::~PacketDecompressor() = default;

bool PacketDecompressor::onConnect(ConnectionContext*) {
  return true;
}

bool PacketDecompressor::onDisconnect(ConnectionContext*) {
  return true;
}

bool PacketDecompressor::decode(ConnectionContext* ctx, void* in, std::vector<void*>& dst) {
  auto* inbuf = (ByteBuffer*) in;

  size_t dlen = inbuf->readVarInt();
  if (dlen > 0) {
    libdeflate_decompressor* decompressor = ctx->gameServer->getDecompressor();

    auto* uncompr = (uint8_t*) malloc(dlen);
    size_t slen = inbuf->readableBytes();
    std::vector<uint8_t> compr = inbuf->readBytes(slen);
    libdeflate_result res = libdeflate_zlib_decompress(decompressor, compr.data(), slen, uncompr, dlen, nullptr);
    if (res != LIBDEFLATE_SUCCESS) {
      std::cout << "Could not decompress buffer: " << res << std::endl;
      return false;
    }

    dst.push_back(new ByteBuffer(uncompr, dlen));
    free(uncompr);
  } else {
    dst.push_back(new ByteBuffer(inbuf->readBytes(inbuf->readableBytes())));
  }

  delete inbuf;

  return true;
}