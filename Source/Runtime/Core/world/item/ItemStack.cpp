
#include "ItemStack.h"

#include "builtin/item_registry.h"

ItemStack::ItemStack(int id, stack_count_t count)
    : present(true),
      itemID(id),
      count(count) {}

std::shared_ptr<Item> ItemStack::getItem() const {
  return ItemRegistry::fromID(itemID);
}

ItemStack::ItemStack() = default;
ItemStack::~ItemStack() = default;
