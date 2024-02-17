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
  ItemStack& get(uint32_t, bool = false);
  ItemStack set(uint32_t, const ItemStack&, bool = true, bool = false);
  ItemStack& getActiveSlotData();
  [[nodiscard]] uint32_t getSize() const;
  [[nodiscard]] uint8_t getActiveSlot() const;
  uint8_t setActiveSlot(uint8_t, bool = true);
  void bindPlayer(EntityPlayer*);
  void updateEquipment(uint32_t, bool = false);

  ItemStack& getHelmet();
  ItemStack& getChestplate();
  ItemStack& getLeggings();
  ItemStack& getBoots();
  ItemStack& getOffHandItem();

  ItemStack& operator[](uint32_t);

 private:
  std::shared_ptr<AbstractContainer> menu;
  PlayerInventoryContainer inventoryContainer;
  EntityPlayer* player = nullptr;
  uint8_t activeSlot = 0;
};