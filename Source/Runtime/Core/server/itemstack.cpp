
#include "itemstack.h"

#include "item/item_registry.h"

ItemStack::ItemStack(int id, uint8_t count)
    : present(true),
      itemID(id),
      itemCount(count) {}

std::shared_ptr<Item> ItemStack::getItem() const {
  return ItemRegistry::fromID(itemID);
}

ItemStack::ItemStack() = default;
ItemStack::~ItemStack() = default;
