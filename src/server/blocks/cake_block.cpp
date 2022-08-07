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

#include "cake_block.h"

CakeBlock::CakeBlock() = default;
CakeBlock::~CakeBlock() = default;

short CakeBlock::getId() const {
  if (bites == BITES_0) return 4333;
  if (bites == BITES_1) return 4334;
  if (bites == BITES_2) return 4335;
  if (bites == BITES_3) return 4336;
  if (bites == BITES_4) return 4337;
  if (bites == BITES_5) return 4338;
  if (bites == BITES_6) return 4339;
  return 4333;
}
