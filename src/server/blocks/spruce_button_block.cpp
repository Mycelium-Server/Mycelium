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


#include "spruce_button_block.h"

SpruceButtonBlock::SpruceButtonBlock() = default;
SpruceButtonBlock::~SpruceButtonBlock() = default;

short SpruceButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 6963;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 6964;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6965;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6966;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 6967;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 6968;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 6969;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 6970;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 6971;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 6972;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6973;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6974;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 6975;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 6976;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 6977;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 6978;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 6979;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 6980;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6981;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6982;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 6983;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 6984;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 6985;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 6986;
  return 6972;
}

std::shared_ptr<Block> SpruceButtonBlock::clone() const {
  std::shared_ptr<SpruceButtonBlock> copy = std::make_shared<SpruceButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
