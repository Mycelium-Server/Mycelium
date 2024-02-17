
#include "red_dye_item.h"

RedDyeItem::RedDyeItem() = default;
RedDyeItem::~RedDyeItem() = default;

int RedDyeItem::getID() const {
  return 863;
}

std::shared_ptr<Item> RedDyeItem::clone() const {
  return std::make_shared<RedDyeItem>();
}
