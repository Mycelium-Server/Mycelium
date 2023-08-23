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

#include <vector>

struct PaintingVariantData {
  int id = 0;
  int width = 0;
  int height = 0;
};

enum PaintingVariant {
  PAINTING_KEBAB = 0,
  PAINTING_AZTEC = 1,
  PAINTING_ALBAN = 2,
  PAINTING_AZTEC2 = 3,
  PAINTING_BOMB = 4,
  PAINTING_PLANT = 5,
  PAINTING_WASTELAND = 6,
  PAINTING_POOL = 7,
  PAINTING_COURBET = 8,
  PAINTING_SEA = 9,
  PAINTING_SUNSET = 10,
  PAINTING_CREEBET = 11,
  PAINTING_WANDERER = 12,
  PAINTING_GRAHAM = 13,
  PAINTING_MATCH = 14,
  PAINTING_BUST = 15,
  PAINTING_STAGE = 16,
  PAINTING_VOID = 17,
  PAINTING_SKULL_AND_ROSES = 18,
  PAINTING_WITHER = 19,
  PAINTING_FIGHTERS = 20,
  PAINTING_POINTER = 21,
  PAINTING_PIGSCENE = 22,
  PAINTING_BURNING_SKULL = 23,
  PAINTING_SKELETON = 24,
  PAINTING_EARTH = 25,
  PAINTING_WIND = 26,
  PAINTING_WATER = 27,
  PAINTING_FIRE = 28,
  PAINTING_DONKEY_KONG = 29
};

const extern std::vector<PaintingVariantData> PaintingRegistry;