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

#include "paletted_container.h"

#include <utility>

PalettedContainer::PalettedContainer(Palette* palette, std::vector<uint16_t> data)
    : palette(palette),
      data(std::move(data)) {}

PalettedContainer::~PalettedContainer() = default;

std::vector<uint16_t> PalettedContainer::getData() const {
  return data;
}

void PalettedContainer::setData(std::vector<uint16_t> v) {
  data = std::move(v);
  dirty = true;
}

Palette* PalettedContainer::getPalette() {
  return palette;
}

void PalettedContainer::setPalette(Palette* p) {
  palette = p;
  dirty = true;
}

std::vector<uint64_t> PalettedContainer::remap() {
  if (dirty) {
    cache = palette->apply(data);
    dirty = false;
  }
  return cache;
}

void PalettedContainer::write(ByteBuffer& out) {
  out.writeByte((uint8_t) palette->bitsPerEntry);
  palette->write(out);
  remap();
  out.writeVarInt((int) cache.size());
  for (uint64_t i: cache) {
    out.writeLong((int64_t) i);
  }
}
