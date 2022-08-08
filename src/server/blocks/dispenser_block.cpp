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


#include "dispenser_block.h"

DispenserBlock::DispenserBlock() = default;
DispenserBlock::~DispenserBlock() = default;

short DispenserBlock::getId() const {
  if (facing == FACING_NORTH && triggered == TRIGGERED_TRUE) return 464;
  if (facing == FACING_NORTH && triggered == TRIGGERED_FALSE) return 465;
  if (facing == FACING_EAST && triggered == TRIGGERED_TRUE) return 466;
  if (facing == FACING_EAST && triggered == TRIGGERED_FALSE) return 467;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_TRUE) return 468;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_FALSE) return 469;
  if (facing == FACING_WEST && triggered == TRIGGERED_TRUE) return 470;
  if (facing == FACING_WEST && triggered == TRIGGERED_FALSE) return 471;
  if (facing == FACING_UP && triggered == TRIGGERED_TRUE) return 472;
  if (facing == FACING_UP && triggered == TRIGGERED_FALSE) return 473;
  if (facing == FACING_DOWN && triggered == TRIGGERED_TRUE) return 474;
  if (facing == FACING_DOWN && triggered == TRIGGERED_FALSE) return 475;
  return 465;
}

std::shared_ptr<Block> DispenserBlock::clone() const {
  std::shared_ptr<DispenserBlock> copy = std::make_shared<DispenserBlock>();
  copy->facing = facing;
  copy->triggered = triggered;
  return copy;
}
