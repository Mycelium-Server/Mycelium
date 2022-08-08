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


#include "mushroom_stem_block.h"

MushroomStemBlock::MushroomStemBlock() = default;
MushroomStemBlock::~MushroomStemBlock() = default;

short MushroomStemBlock::getId() const {
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5008;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5009;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5010;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5011;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5012;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5013;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5014;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5015;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5016;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5017;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5018;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5019;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5020;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5021;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5022;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5023;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5024;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5025;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5026;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5027;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5028;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5029;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5030;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5031;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5032;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5033;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5034;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5035;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5036;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5037;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5038;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5039;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5040;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5041;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5042;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5043;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5044;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5045;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5046;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5047;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5048;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5049;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5050;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5051;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5052;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5053;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5054;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5055;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5056;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5057;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5058;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5059;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5060;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5061;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5062;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5063;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5064;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5065;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5066;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5067;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5068;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5069;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5070;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5071;
  return 5008;
}

std::shared_ptr<Block> MushroomStemBlock::clone() const {
  std::shared_ptr<MushroomStemBlock> copy = std::make_shared<MushroomStemBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}
