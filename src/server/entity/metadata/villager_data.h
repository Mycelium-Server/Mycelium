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

enum VillagerType {
  MINECRAFT_DESERT = 0,
  MINECRAFT_JUNGLE = 1,
  MINECRAFT_PLAINS = 2,
  MINECRAFT_SAVANNA = 3,
  MINECRAFT_SNOW = 4,
  MINECRAFT_SWAMP = 5,
  MINECRAFT_TAIGA = 6,
};

enum VillagerProfession {
  MINECRAFT_NONE = 0,
  MINECRAFT_ARMORER = 1,
  MINECRAFT_BUTCHER = 2,
  MINECRAFT_CARTOGRAPHER = 3,
  MINECRAFT_CLERIC = 4,
  MINECRAFT_FARMER = 5,
  MINECRAFT_FISHERMAN = 6,
  MINECRAFT_FLETCHER = 7,
  MINECRAFT_LEATHERWORKER = 8,
  MINECRAFT_LIBRARIAN = 9,
  MINECRAFT_MASON = 10,
  MINECRAFT_NITWIT = 11,
  MINECRAFT_SHEPHERD = 12,
  MINECRAFT_TOOLSMITH = 13,
  MINECRAFT_WEAPONSMITH = 14,
};

struct VillagerData {
  VillagerType type;
  VillagerProfession profession;
  int level;
};