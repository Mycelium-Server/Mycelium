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

#include <memory>
#include <vector>

#include "block.h"

class BlockRegistry {
 public:
  static void init();
  static std::shared_ptr<Block> fromID(int);
  static std::shared_ptr<Block> newInstanceFromID(int);

 private:
  static void generateA();
  static void generateB();
  static void generateC();
  static void generateD();
  static void generateE();
  static void generateF();
  static void generateG();
  static void generateH();
  static void generateI();
  static void generateJ();
  static void generateK();
  static void generateL();
  static void generateM();
  static void generateN();
  static void generateO();
  static void generateP();
  static void generateQ();
  static void generateR();
  static void generateS();
  static void generateT();
  static void generateU();
  static void generateV();
  static void generateW();
  static void generateX();
  static void generateY();
  static void generateZ();

 private:
  static std::vector<std::shared_ptr<Block>> registry;
};
