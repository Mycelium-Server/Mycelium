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

#include "container.h"

class EntityPlayer;

class PlayerInventory {
 public:
  PlayerInventory();
  ~PlayerInventory();

 public:
  std::shared_ptr<AbstractContainer> getMenu();
  void setMenu(const std::shared_ptr<AbstractContainer>&);
  PlayerInventoryContainer& getInventoryContainer();
  ItemStack& get(unsigned);
  ItemStack set(unsigned, const ItemStack&, bool = true, bool = false);
  ItemStack& getActiveSlotData();
  [[nodiscard]] unsigned getSize() const;
  [[nodiscard]] unsigned char getActiveSlot() const;
  unsigned char setActiveSlot(unsigned char, bool = true);
  void bindPlayer(EntityPlayer*);
  void updateEquipment(unsigned, bool = false);

  ItemStack& getHelmet();
  ItemStack& getChestplate();
  ItemStack& getLeggings();
  ItemStack& getBoots();
  ItemStack& getOffHandItem();

  ItemStack& operator[](unsigned);

 private:
  std::shared_ptr<AbstractContainer> menu;
  PlayerInventoryContainer inventoryContainer;
  EntityPlayer* player = nullptr;
  unsigned char activeSlot = 0;
};