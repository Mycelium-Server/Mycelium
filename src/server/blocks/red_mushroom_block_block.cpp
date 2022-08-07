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

#include "red_mushroom_block_block.h"

RedMushroomBlockBlock::RedMushroomBlockBlock() = default;
RedMushroomBlockBlock::~RedMushroomBlockBlock() = default;

short RedMushroomBlockBlock::getId() const {
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 4944;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 4945;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 4946;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 4947;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 4948;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 4949;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 4950;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 4951;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 4952;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 4953;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 4954;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 4955;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 4956;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 4957;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 4958;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 4959;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 4960;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 4961;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 4962;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 4963;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 4964;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 4965;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 4966;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 4967;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 4968;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 4969;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 4970;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 4971;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 4972;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 4973;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 4974;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 4975;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 4976;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 4977;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 4978;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 4979;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 4980;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 4981;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 4982;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 4983;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 4984;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 4985;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 4986;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 4987;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 4988;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 4989;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 4990;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 4991;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 4992;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 4993;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 4994;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 4995;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 4996;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 4997;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 4998;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 4999;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5000;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5001;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5002;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5003;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5004;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5005;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5006;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5007;
  return 4944;
}
