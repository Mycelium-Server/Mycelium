
#include "leather_chestplate_item.h"

LeatherChestplateItem::LeatherChestplateItem() = default;
LeatherChestplateItem::~LeatherChestplateItem() = default;

int LeatherChestplateItem::getID() const {
  return 775;
}

std::shared_ptr<Item> LeatherChestplateItem::clone() const {
  return std::make_shared<LeatherChestplateItem>();
}
