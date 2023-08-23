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

#include "chunk.h"

#include "world.h"

void ChunkLocation::fromID(uint64_t id) {
  x = ((int) (uint32_t) (id >> 41)) * (id & 0x02 ? -1 : 1);
  z = ((int) (id >> 18) & 0x7FFFFF) * (id & 0x01 ? -1 : 1);
  world = World::getByID((uint16_t) (id >> 2));
}

[[nodiscard]] uint64_t ChunkLocation::getID() const {
  return (uint64_t) std::abs(x) << 41 | ((uint32_t) std::abs(z) << 18) | (world->getID() << 2) | (x < 0 ? 2 : 0) | (z < 0 ? 1 : 0);
}

Chunk::Chunk(int x, int z)
    : Chunk(ChunkLocation {nullptr, x, z}) {}

Chunk::Chunk(const ChunkLocation& location)
    : location(location) {
  for (auto& section: sections) {
    section = (ChunkSection*) EMPTY_CHUNK_SECTION;
  }
}

Chunk::~Chunk() {
  for (auto& section: sections) {
    if (section != EMPTY_CHUNK_SECTION) {
      delete section;
    }
  }
}

void Chunk::setBlock(int lx, int y, int lz, int id) {
  ChunkSection* section = getSectionByY(y);
  section->setBlock(lx, (y + 64) % 16, lz, id);
}

int Chunk::getBlock(int lx, int y, int lz) {
  return getSectionByY(y)->getBlock(lx, (y + 64) % 16, lz);
}

ChunkSection* Chunk::getSectionByY(int y) {
  double corrected = y + 64;
  int id = (int) std::floor(corrected / 16.0);
  if (sections[id] == EMPTY_CHUNK_SECTION) {
    sections[id] = new ChunkSection();
  }
  return sections[id];
}

int Chunk::getAbsoluteX(int local) const {
  return location.x * 16 + local;
}

int Chunk::getAbsoluteZ(int local) const {
  return location.z * 16 + local;
}

Heightmap* Chunk::createHeightmap() const {
  auto* heightmap = new Heightmap();
  for (int z = 0; z < 16; z++) {
    for (int x = 0; x < 16; x++) {
      int maxY = 0;
      for (int y = 0; y < 24; y++) {
        ChunkSection* section = sections[y];
        int offset = y * 16;
        for (int ly = 0; ly < 16; ly++) {
          if (section->getBlock(x, ly, z) != 0) {
            maxY = offset + ly;
          }
        }
      }
      heightmap->set((short) (maxY + 1));
      heightmap->next();
    }
  }
  return heightmap;
}

void Chunk::write(ByteBuffer& out) const {
  out.writeInt(location.x);
  out.writeInt(location.z);

  Heightmap* heightmap = createHeightmap();
  heightmap->write(out);// TODO: Cache
  delete heightmap;

  ByteBuffer data;// TODO: Cache
  for (auto section: sections) {
    section->write(data);
  }
  out.writeVarInt((int) data.readableBytes());
  out.writeBytes(data);
  out.writeVarInt(0);// TODO: Block entities ?
  out.writeByte(1);  // Trust edges ?
  out.writeByte(0);  // TODO: Light ?
  out.writeByte(0);
  out.writeByte(0);
  out.writeByte(0);
  out.writeVarInt(0);
  out.writeVarInt(0);
}

World* Chunk::getOwner() {
  return location.world;
}

void Chunk::setOwner(World* world) {
  location.world = world;
}
