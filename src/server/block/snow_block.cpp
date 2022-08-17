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


#include "snow_block.h"

SnowBlock::SnowBlock() = default;
SnowBlock::~SnowBlock() = default;

short SnowBlock::getId() const {
  if (layers == LAYERS_1) return 4230;
  if (layers == LAYERS_2) return 4231;
  if (layers == LAYERS_3) return 4232;
  if (layers == LAYERS_4) return 4233;
  if (layers == LAYERS_5) return 4234;
  if (layers == LAYERS_6) return 4235;
  if (layers == LAYERS_7) return 4236;
  if (layers == LAYERS_8) return 4237;
  return 4230;
}

std::shared_ptr<Block> SnowBlock::clone() const {
  std::shared_ptr<SnowBlock> copy = std::make_shared<SnowBlock>();
  copy->layers = layers;
  return copy;
}
