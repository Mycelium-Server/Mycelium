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

#include <zlib.h>

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
    const char* uncompr = (const char*) inbuf->data.data();
    auto slen = (uLong) inbuf->readableBytes();
    uLong dlen = compressBound(slen);
    auto* compr = (unsigned char*) malloc(dlen);
    int res = compress((Bytef*) compr, &dlen, (Bytef*) uncompr, slen);
    if (res == Z_BUF_ERROR || res == Z_MEM_ERROR) {
      std::cerr << "Unable to compress buffer" << std::endl;
      return false;
    }

    outbuf->writeVarInt((int) slen);
    outbuf->writeBytes((const unsigned char*) compr, dlen);

    free(compr);
  }

  delete inbuf;
  out = outbuf;

  return true;
}