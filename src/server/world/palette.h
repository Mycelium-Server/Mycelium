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

#include <set>
#include <vector>

#include "../../byte_buffer.h"

class Palette {
 public:
  Palette(int, std::set<uint16_t>);
  virtual ~Palette();

 public:
  virtual std::vector<uint64_t> apply(std::vector<uint16_t>) = 0;
  virtual void write(ByteBuffer&) = 0;

 public:
  int bitsPerEntry;
  std::set<uint16_t> palette;
};

class SingleValuedPalette : public Palette {
 public:
  explicit SingleValuedPalette(std::set<uint16_t>);
  ~SingleValuedPalette() override;

 public:
  std::vector<uint64_t> apply(std::vector<uint16_t>) override;
  void write(ByteBuffer&) override;
};

class IndirectPalette : public Palette {
 public:
  IndirectPalette(int, std::set<uint16_t>);
  ~IndirectPalette() override;

 public:
  std::vector<uint64_t> apply(std::vector<uint16_t>) override;
  void write(ByteBuffer&) override;
};

class DirectPalette : public Palette {
 public:
  DirectPalette();
  ~DirectPalette() override;

 public:
  std::vector<uint64_t> apply(std::vector<uint16_t>) override;
  void write(ByteBuffer&) override;
};