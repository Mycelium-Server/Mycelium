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

#include "../itemstack.h"

template<unsigned size, int id>
class Container {
 public:
  Container();
  virtual ~Container();

 public:
  ItemStack& get(unsigned);
  ItemStack set(unsigned, const ItemStack&);
  [[nodiscard]] unsigned getSize() const;
  [[nodiscard]] int getID() const;

 public:
  ItemStack operator[](unsigned) const;
  ItemStack& operator[](unsigned);

 public:
  std::array<ItemStack, size> slots {};
};

typedef Container<46, 0> PlayerInventoryContainer;

typedef Container<9, 0> Generic9x1Container;
typedef Container<18, 1> Generic9x2Container;
typedef Container<27, 2> Generic9x3Container;
typedef Container<36, 3> Generic9x4Container;
typedef Container<45, 4> Generic9x5Container;
typedef Container<54, 5> Generic9x6Container;
typedef Container<9, 6> Generic3x3Container;
typedef Container<3, 7> AnvilContainer;
typedef Container<1, 8> BeaconContainer;
typedef Container<3, 9> BlastFurnaceContainer;
typedef Container<5, 10> BrewingStandContainer;
typedef Container<10, 11> CraftingContainer;
typedef Container<2, 12> EnchantmentContainer;
typedef Container<3, 13> FurnaceContainer;
typedef Container<3, 14> GrindstoneContainer;
typedef Container<5, 15> HopperContainer;
typedef Container<1, 16> LecternContainer;
typedef Container<4, 17> LoomContainer;
typedef Container<3, 18> MerchantContainer;
typedef Container<27, 19> ShulkerBoxContainer;
typedef Container<3, 20> SmithingContainer;
typedef Container<3, 21> SmokerContainer;
typedef Container<3, 22> CartographyContainer;
typedef Container<2, 23> StonecutterContainer;