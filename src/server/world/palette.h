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
  Palette(int, std::set<unsigned short>);
  virtual ~Palette();

 public:
  virtual std::vector<unsigned long long> apply(std::vector<unsigned short>) = 0;
  virtual void write(ByteBuffer&) = 0;

 public:
  int bitsPerEntry;
  std::set<unsigned short> palette;
};

class SingleValuedPalette : public Palette {
 public:
  explicit SingleValuedPalette(std::set<unsigned short>);
  ~SingleValuedPalette() override;

 public:
  std::vector<unsigned long long> apply(std::vector<unsigned short>) override;
  void write(ByteBuffer&) override;
};

class IndirectPalette : public Palette {
 public:
  IndirectPalette(int, std::set<unsigned short>);
  ~IndirectPalette() override;

 public:
  std::vector<unsigned long long> apply(std::vector<unsigned short>) override;
  void write(ByteBuffer&) override;
};

class DirectPalette : public Palette {
 public:
  DirectPalette();
  ~DirectPalette() override;

 public:
  std::vector<unsigned long long> apply(std::vector<unsigned short>) override;
  void write(ByteBuffer&) override;
};