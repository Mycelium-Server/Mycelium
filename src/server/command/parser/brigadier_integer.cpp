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

#include "brigadier_integer.h"

BrigadierIntegerParser::BrigadierIntegerParser() = default;
BrigadierIntegerParser::~BrigadierIntegerParser() = default;

int BrigadierIntegerParser::getID() const {
  return 3;
}

std::string BrigadierIntegerParser::getIdentifier() const {
  return "brigadier:integer";
}

void BrigadierIntegerParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte(((unsigned char) min.has_value()) |
                ((unsigned char) max.has_value()) << 1);
  if (min.has_value()) {
    buf.writeInt(min.value());
  }
  if (max.has_value()) {
    buf.writeInt(max.value());
  }
}