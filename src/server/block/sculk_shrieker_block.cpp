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


#include "sculk_shrieker_block.h"

SculkShriekerBlock::SculkShriekerBlock() = default;
SculkShriekerBlock::~SculkShriekerBlock() = default;

short SculkShriekerBlock::getId() const {
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_TRUE) return 18900;
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_FALSE) return 18901;
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_TRUE) return 18902;
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_FALSE) return 18903;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_TRUE) return 18904;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_FALSE) return 18905;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_TRUE) return 18906;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_FALSE) return 18907;
  return 18907;
}

std::shared_ptr<Block> SculkShriekerBlock::clone() const {
  std::shared_ptr<SculkShriekerBlock> copy = std::make_shared<SculkShriekerBlock>();
  copy->can_summon = can_summon;
  copy->shrieking = shrieking;
  copy->waterlogged = waterlogged;
  return copy;
}
