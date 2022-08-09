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

#include "player_inventory.h"

PlayerInventory::PlayerInventory() = default;
PlayerInventory::~PlayerInventory() = default;

std::shared_ptr<AbstractContainer> PlayerInventory::getMenu() {
  return menu;
}

void PlayerInventory::setMenu(const std::shared_ptr<AbstractContainer>& value) {
  menu = value;
}

PlayerInventoryContainer& PlayerInventory::getInventoryContainer() {
  return inventoryContainer;
}

ItemStack& PlayerInventory::get(unsigned n) {
  if (menu != nullptr) {
    if (n < menu->getSize()) {
      return menu->get(n);
    } else {
      return inventoryContainer.get(n - menu->getSize() + 9);
    }
  } else {
    return inventoryContainer.get(n);
  }
}

ItemStack PlayerInventory::set(unsigned n, const ItemStack& value) {
  if (menu != nullptr) {
    if (n < menu->getSize()) {
      return menu->set(n, value);
    } else {
      return inventoryContainer.set(n - menu->getSize() + 9, value);
    }
  } else {
    return inventoryContainer.set(n, value);
  }
}

ItemStack& PlayerInventory::operator[](unsigned n) {
  return get(n);
}
