
#include "iron_chestplate_item.h"

IronChestplateItem::IronChestplateItem() = default;
IronChestplateItem::~IronChestplateItem() = default;

int IronChestplateItem::getID() const {
  return 783;
}

std::shared_ptr<Item> IronChestplateItem::clone() const {
  return std::make_shared<IronChestplateItem>();
}
