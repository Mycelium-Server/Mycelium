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

#include "registry_codec.h"

#include <fstream>

static ByteBuffer* registry_codec = nullptr;

ByteBuffer* default_registry_codec() {
  if (!registry_codec) {
    std::ifstream file("registry_codec.nbt", std::ios_base::binary);

    file.seekg(0, std::ios_base::end);
    size_t length = file.tellg();
    file.seekg(0, std::ios_base::beg);

    std::vector<unsigned char> data;
    data.reserve(length);
    std::copy(std::istreambuf_iterator<char>(file),
              std::istreambuf_iterator<char>(),
              std::back_inserter(data));
    registry_codec = new ByteBuffer(data);
  }

  return registry_codec;
}