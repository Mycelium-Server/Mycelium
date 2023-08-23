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

#pragma once

#include "chunk_section.h"
#include "heightmap.h"

class World;

struct ChunkLocation {
  int x = 0, z = 0;

  [[nodiscard]] uint64_t getID() const {
    return (uint64_t) x << 32 | (uint32_t) z;
  }
};

class Chunk {
 public:
  Chunk(int, int);
  explicit Chunk(const ChunkLocation&);
  ~Chunk();

 public:
  void setBlock(int, int, int, int);
  [[nodiscard]] int getBlock(int, int, int);
  [[nodiscard]] ChunkSection* getSectionByY(int);
  [[nodiscard]] int getAbsoluteX(int) const;
  [[nodiscard]] int getAbsoluteZ(int) const;
  [[nodiscard]] Heightmap* createHeightmap() const;
  [[nodiscard]] World* getOwner();
  void setOwner(World*);
  void write(ByteBuffer&) const;

 public:
  ChunkLocation location;
  ChunkSection* sections[24] {};

 private:
  World* owner;
};