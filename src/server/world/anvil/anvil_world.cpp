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

#include "anvil_world.h"

#include <filesystem>

using path = std::filesystem::path;

#define ASSERT_EXISTS(f)                                                           \
  if (!std::filesystem::exists(f)) {                                               \
    std::cerr << "Couldn't find file/directory: " << #f << std::endl;              \
    std::cerr << "Caused by: " << __FILE__ << ", line: " << __LINE__ << std::endl; \
  }

AnvilWorld::AnvilWorld(const std::vector<Dimension>& dimensions, const LevelDat& levelDat)
    : dimensions(dimensions),
      levelDat(levelDat) {}
AnvilWorld::~AnvilWorld() = default;

std::shared_ptr<AnvilWorld> AnvilWorld::load(const std::string& name) {
  ASSERT_EXISTS(name)
  ASSERT_EXISTS(path {name} / "level.dat")

  LevelDat levelDat;

  {
    ByteBuffer levelDatBuf {path {name} / "level.dat"};
    levelDat.read(levelDatBuf);
  }

  return std::make_shared<AnvilWorld>(std::vector<Dimension> {}, levelDat);
}

void AnvilWorld::save(const std::string& name) {
}

std::vector<Dimension>& AnvilWorld::getDimensions() {
  return dimensions;
}

LevelDat& AnvilWorld::getLevelDat() {
  return levelDat;
}
