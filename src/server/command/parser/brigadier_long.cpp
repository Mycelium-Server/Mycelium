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

#include "brigadier_long.h"

BrigadierLongParser::BrigadierLongParser() = default;
BrigadierLongParser::~BrigadierLongParser() = default;

int BrigadierLongParser::getID() const {
  return 4;
}

std::string BrigadierLongParser::getIdentifier() const {
  return "brigadier:long";
}

void BrigadierLongParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte(((unsigned char) min.has_value()) |
                ((unsigned char) max.has_value()) << 1);
  if (min.has_value()) {
    buf.writeLong(min.value());
  }
  if (max.has_value()) {
    buf.writeLong(max.value());
  }
}
