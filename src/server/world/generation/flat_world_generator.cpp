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

#include "flat_world_generator.h"

FlatWorldGenerator::FlatWorldGenerator() = default;
FlatWorldGenerator::~FlatWorldGenerator() = default;

void FlatWorldGenerator::generateChunk(Chunk* chunk) {
  for (int x = 0; x < 16; x++) {
    for (int z = 0; z < 16; z++) {
      chunk->setBlock(x, 4, z, 9);
      chunk->setBlock(x, 3, z, 1);
      chunk->setBlock(x, 2, z, 1);
      chunk->setBlock(x, 1, z, 1);
      chunk->setBlock(x, 0, z, 74);
    }
  }
}