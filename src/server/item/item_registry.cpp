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

#include "item_registry.h"

void ItemRegistry::init() {
  registry.resize(1152);
  generateA();
  generateB();
  generateC();
  generateD();
  generateE();
  generateF();
  generateG();
  generateH();
  generateI();
  generateJ();
  generateK();
  generateL();
  generateM();
  generateN();
  generateO();
  generateP();
  generateQ();
  generateR();
  generateS();
  generateT();
  generateU();
  generateV();
  generateW();
  generateX();
  generateY();
  generateZ();
}

std::shared_ptr<Item> ItemRegistry::fromID(int id) {
  if (id < 0 || id >= registry.size()) {
    return registry[0];
  }
  return registry[id];
}

std::shared_ptr<Item> ItemRegistry::newInstanceFromID(int id) {
  return fromID(id)->clone();
}

std::vector<std::shared_ptr<Item>> ItemRegistry::registry;
