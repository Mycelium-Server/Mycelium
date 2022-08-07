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

#include "chunk_section.h"

#include <cmath>

ChunkSection::ChunkSection() = default;
ChunkSection::~ChunkSection() = default;

void ChunkSection::setBlock(unsigned char x, unsigned char y, unsigned char z, int id) {
  if (x < 16 && y < 16 && z < 16) {
    int index = y * 256 + z * 16 + x;
    int current = blocks[index];
    blockPalette.insert((unsigned short) id);
    if (current == 0 && id != 0) {
      totalBlocks++;
    } else if (current != 0 && id == 0) {
      totalBlocks--;
    }
    blocks[index] = (unsigned short) id;
  }
}

int ChunkSection::getBlock(unsigned char x, unsigned char y, unsigned char z) {
  if (x < 16 && y < 16 && z < 16) {
    return blocks[y * 256 + z * 16 + x];
  }
  return 0;
}

int ChunkSection::getBlockBitsPerEntry() const {
  if (blockPalette.size() == 1) {
    return 0;
  }
  int bits = (int) std::log2(blockPalette.size() - 1) + 1;
  if (bits < 4) {
    return 4;
  } else if (bits < 9) {
    return bits;
  } else {
    return 15;
  }
}

int ChunkSection::getBiomeBitsPerEntry() const {
  if (biomePalette.size() == 1) {
    return 0;
  }
  int bits = (int) std::log2(biomePalette.size() - 1) + 1;
  if (bits < 4) {
    return bits;
  } else {
    return 6;
  }
}

Palette* ChunkSection::createBlockPalette() const {
  int bits = getBlockBitsPerEntry();
  if (bits == 0) {
    return new SingleValuedPalette(blockPalette);
  } else if (bits < 9) {
    return new IndirectPalette(bits, blockPalette);
  } else {
    return new DirectPalette();
  }
}


Palette* ChunkSection::createBiomePalette() const {
  int bits = getBiomeBitsPerEntry();
  if (bits == 0) {
    return new SingleValuedPalette(biomePalette);
  } else if (bits < 4) {
    return new IndirectPalette(bits, biomePalette);
  } else {
    return new DirectPalette();
  }
}

PalettedContainer* ChunkSection::createBlockContainer() const {
  return new PalettedContainer(createBlockPalette(), {blocks, blocks + 4096});
}

PalettedContainer* ChunkSection::createBiomeContainer() const {
  return new PalettedContainer(createBiomePalette(), {biomes, biomes + 64});
}

void ChunkSection::write(ByteBuffer& out) const {
  out.writeShort(totalBlocks);

  PalettedContainer* blockContainer = createBlockContainer();// TODO: Cache
  blockContainer->write(out);
  delete blockContainer;

  PalettedContainer* biomeContainer = createBiomeContainer();// TODO: Cache
  biomeContainer->write(out);
  delete biomeContainer;
}
