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

#pragma once

#include <vector>

#include "../../../uuid.h"

struct CustomBossEvent {
  std::string id;
  std::vector<uuids::uuid> players;
  std::string color;
  bool createWorldFog = false;
  bool darkenScreen = false;
  int max = 0;
  int value = 0;
  std::string name;
  std::string overlay;
  bool playBossMusic = false;
  bool visible = false;
};