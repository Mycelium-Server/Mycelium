#pragma once

#include "../../NBT.h"
#include "builtin/item.h"

// the original implementation of the serialization of the item stack uses byte
// There is no unsigned byte in Java, so we use a signed byte.
typedef signed char stack_count_t;

class ItemStack {
 public:
  ItemStack(int, stack_count_t);
  ItemStack();
  ~ItemStack();

 public:
  [[nodiscard]] std::shared_ptr<Item> getItem() const;

 public:
  bool present = false;
  int itemID = 0;// TODO: Item enum/class/struct
  stack_count_t count = 0;
  std::optional<std::shared_ptr<NBT_Component>> nbt {};
};