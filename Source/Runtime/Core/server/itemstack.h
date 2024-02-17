#pragma once

#include "../NBT.h"
#include "item/item.h"

class ItemStack {
 public:
  ItemStack(int, uint8_t);
  ItemStack();
  ~ItemStack();

 public:
  [[nodiscard]] std::shared_ptr<Item> getItem() const;

 public:
  bool present = false;
  int itemID = 0;// TODO: Item enum/class/struct
  uint8_t itemCount = 0;
  std::optional<std::shared_ptr<NBT_Component>> nbt {};
};