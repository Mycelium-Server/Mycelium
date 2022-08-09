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

#include "container.h"

#include <cassert>

template<unsigned size, int id>
Container<size, id>::Container() = default;

template<unsigned size, int id>
Container<size, id>::~Container() = default;

template<unsigned size, int id>
ItemStack& Container<size, id>::get(unsigned n) {
  assert(n >= 0 && n < size);
  return slots[n];
}

template<unsigned size, int id>
ItemStack Container<size, id>::set(unsigned n, const ItemStack& value) {
  assert(n >= 0 && n < size);
  std::swap(value, slots[n]);
  return value;
}

template<unsigned size, int id>
unsigned Container<size, id>::getSize() const {
  return size;
}

template<unsigned size, int id>
int Container<size, id>::getID() const {
  return id;
}

template<unsigned size, int id>
ItemStack Container<size, id>::operator[](unsigned n) const {
  assert(n >= 0 && n < size);
  return slots[n];
}

template<unsigned size, int id>
ItemStack& Container<size, id>::operator[](unsigned n) {
  return get(n);
}