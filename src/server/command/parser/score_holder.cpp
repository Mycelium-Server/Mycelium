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

#include "score_holder.h"

ScoreHolderParser::ScoreHolderParser() = default;
ScoreHolderParser::~ScoreHolderParser() = default;

int ScoreHolderParser::getID() const {
  return 29;
}

std::string ScoreHolderParser::getIdentifier() const {
  return "minecraft:score_holder";
}

void ScoreHolderParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte((uint8_t) allowMultiple);
}