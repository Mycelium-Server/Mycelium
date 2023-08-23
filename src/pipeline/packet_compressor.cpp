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

#include <iostream>

#include "../connection_context.h"
#include "handlers.h"

PacketCompressor::PacketCompressor() = default;
PacketCompressor::~PacketCompressor() = default;

bool PacketCompressor::encode(ConnectionContext* ctx, void* in, void*& out) {
  auto* inbuf = (ByteBuffer*) in;
  auto* outbuf = new ByteBuffer();

  if (inbuf->readableBytes() < ctx->gameServer->getCompressionThreshold()) {
    outbuf->writeVarInt(0);
    outbuf->writeBytes(*inbuf);
  } else {
    libdeflate_compressor* compressor = ctx->gameServer->getCompressor();

    const char* uncompr = (const char*) inbuf->data.data();
    auto slen = (size_t) inbuf->readableBytes();
    size_t dlen = libdeflate_deflate_compress_bound(compressor, slen);

    auto* compr = (uint8_t*) malloc(dlen);
    dlen = libdeflate_zlib_compress(compressor, uncompr, slen, compr, dlen);
    if (dlen <= 0) {
      std::cerr << "Couldn't compress buffer" << std::endl;
      return false;
    }

    outbuf->writeVarInt((int) slen);
    outbuf->writeBytes((const uint8_t*) compr, dlen);

    free(compr);
  }

  delete inbuf;
  out = outbuf;

  return true;
}