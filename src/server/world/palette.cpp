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

#include "palette.h"

#include <algorithm>
#include <iostream>
#include <utility>

Palette::Palette(int bpe, std::set<unsigned short> palette)
    : bitsPerEntry(bpe),
      palette(std::move(palette)) {}

Palette::~Palette() = default;

SingleValuedPalette::SingleValuedPalette(std::set<unsigned short> palette)
    : Palette(0, std::move(palette)) {}

SingleValuedPalette::~SingleValuedPalette() = default;

std::vector<unsigned long long> SingleValuedPalette::apply(std::vector<unsigned short>) {
  return {};
}

void SingleValuedPalette::write(ByteBuffer& out) {
  out.writeVarInt(*palette.begin());
}

IndirectPalette::IndirectPalette(int bpe, std::set<unsigned short> palette)
    : Palette(bpe, std::move(palette)) {}

IndirectPalette::~IndirectPalette() = default;

std::vector<unsigned long long> IndirectPalette::apply(std::vector<unsigned short> data) {
  std::vector<unsigned long long> dst;
  unsigned long long current = 0;
  int currentBit = 0;

  for (auto& element: data) {
    auto iter = std::find(palette.begin(), palette.end(), element);
    if (iter == palette.end()) {
      std::cerr << "Invalid element " << element << std::endl;
      return {};
    }
    auto index = (unsigned long long) std::distance(palette.begin(), iter);
    current |= (index << currentBit);
    currentBit += bitsPerEntry;
    if (currentBit + bitsPerEntry > 64) {
      dst.push_back(current);
      currentBit = 0;
      current = 0;
    }
  }

  if (current != 0 || currentBit != 0) {
    dst.push_back(current);
  }

  return dst;
}

void IndirectPalette::write(ByteBuffer& out) {
  out.writeVarInt((int) palette.size());
  for (auto& element: palette) {
    out.writeVarInt(element);
  }
}

DirectPalette::DirectPalette()
    : Palette(15, {}) {}

DirectPalette::~DirectPalette() = default;

std::vector<unsigned long long> DirectPalette::apply(std::vector<unsigned short> data) {
  std::vector<unsigned long long> dst;
  unsigned long long current = 0;
  int currentBit = 0;

  for (auto& element: data) {
    current |= ((unsigned long long) element) << currentBit;
    currentBit += bitsPerEntry;
    if (currentBit + bitsPerEntry > 64) {
      currentBit = 0;
      dst.push_back(current);
      current = 0;
    }
  }

  if (current != 0 || currentBit != 0) {
    dst.push_back(current);
  }

  return dst;
}

void DirectPalette::write(ByteBuffer&) {
  // no fields
}