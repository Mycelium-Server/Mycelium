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

#include "../../protocol/clientbound_set_container_slot.h"
#include "../../protocol/clientbound_set_equipment.h"
#include "../../protocol/clientbound_set_held_item.h"

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

ItemStack& PlayerInventory::get(uint32_t n, bool ignoreMenu) {
  if (!ignoreMenu && menu != nullptr) {
    if (n < menu->getSize()) {
      return menu->get(n);
    } else {
      return inventoryContainer.get(n - menu->getSize() + 9);
    }
  } else {
    return inventoryContainer.get(n);
  }
}

ItemStack PlayerInventory::set(uint32_t n, const ItemStack& value, bool syncClient, bool ignoreMenu) {
  ItemStack res;
  if (!ignoreMenu && menu != nullptr) {
    if (n < menu->getSize()) {
      res = menu->set(n, value);

      if (player && syncClient) {
        auto* packet = new ClientboundSetContainerSlot();
        packet->construct(*menu, (short) n);
        player->connection->write(packet);
        delete packet;
      }
    } else {
      uint32_t slot = n - menu->getSize() + 9;
      res = inventoryContainer.set(slot, value);

      if (player && syncClient) {
        auto* packet = new ClientboundSetContainerSlot();
        packet->construct(inventoryContainer, (short) slot);
        player->connection->write(packet);
        delete packet;
      }
    }
  } else {
    res = inventoryContainer.set(n, value);

    if (player && syncClient) {
      auto* packet = new ClientboundSetContainerSlot();
      packet->construct(inventoryContainer, (short) n);
      player->connection->write(packet);
      delete packet;
    }
  }

  if (syncClient) {
    updateEquipment(n, ignoreMenu);
  }

  return res;
}

ItemStack& PlayerInventory::operator[](uint32_t n) {
  return get(n);
}

uint32_t PlayerInventory::getSize() const {
  if (menu != nullptr) {
    return menu->getSize() + inventoryContainer.getSize();
  }
  return inventoryContainer.getSize();
}

ItemStack& PlayerInventory::getActiveSlotData() {
  return get(36 + activeSlot);
}

uint8_t PlayerInventory::getActiveSlot() const {
  return activeSlot;
}

uint8_t PlayerInventory::setActiveSlot(uint8_t slot, bool ackClient) {
  std::swap(activeSlot, slot);

  if (ackClient && player) {
    auto* heldSlot = new ClientboundSetHeldItem();
    heldSlot->slot = activeSlot;
    player->connection->write(heldSlot);
    delete heldSlot;

    updateEquipment(36 + activeSlot, true);
  }

  return slot;
}

void PlayerInventory::bindPlayer(EntityPlayer* p) {
  player = p;
}

void PlayerInventory::updateEquipment(uint32_t slot, bool ignoreMenu) {
  if (player) {
    ClientboundSetEquipment::EquipmentType type;

    if (!ignoreMenu && menu) {
      if (slot == activeSlot + 27 + menu->getSize()) {
        type = ClientboundSetEquipment::MAIN_HAND;
      } else {
        return;
      }
    } else {
      if (slot == activeSlot + 36) {
        type = ClientboundSetEquipment::MAIN_HAND;
      } else {
        switch (slot) {
          case 45:
            type = ClientboundSetEquipment::OFF_HAND;
            break;

          case 5:
            type = ClientboundSetEquipment::HELMET;
            break;

          case 6:
            type = ClientboundSetEquipment::CHESTPLATE;
            break;

          case 7:
            type = ClientboundSetEquipment::LEGGINGS;
            break;

          case 8:
            type = ClientboundSetEquipment::BOOTS;
            break;

          default:
            return;
        }
      }
    }

    auto* packet = new ClientboundSetEquipment;
    packet->entity = player;
    packet->equipment[type] = get(slot);

    for (auto& data: player->connection->gameServer->getPlayers()) {
      if (data->entity == player) {
        continue;
      }
      // TODO: Check distance
      data->entity->connection->write(packet);
    }

    delete packet;
  }
}

ItemStack& PlayerInventory::getHelmet() {
  return inventoryContainer.get(5);
}

ItemStack& PlayerInventory::getChestplate() {
  return inventoryContainer.get(6);
}

ItemStack& PlayerInventory::getLeggings() {
  return inventoryContainer.get(7);
}

ItemStack& PlayerInventory::getBoots() {
  return inventoryContainer.get(8);
}

ItemStack& PlayerInventory::getOffHandItem() {
  return inventoryContainer.get(45);
}