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


#include "acacia_button_block.h"

AcaciaButtonBlock::AcaciaButtonBlock() = default;
AcaciaButtonBlock::~AcaciaButtonBlock() = default;

short AcaciaButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 7035;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 7036;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7037;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7038;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 7039;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 7040;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 7041;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 7042;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 7043;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 7044;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7045;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7046;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 7047;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 7048;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 7049;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 7050;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 7051;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 7052;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7053;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7054;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 7055;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 7056;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 7057;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 7058;
  return 7044;
}

std::shared_ptr<Block> AcaciaButtonBlock::clone() const {
  std::shared_ptr<AcaciaButtonBlock> copy = std::make_shared<AcaciaButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
