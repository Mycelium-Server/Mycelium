
#include "ink_sac_item.h"

InkSacItem::InkSacItem() = default;
InkSacItem::~InkSacItem() = default;

int InkSacItem::getID() const {
  return 846;
}

std::shared_ptr<Item> InkSacItem::clone() const {
  return std::make_shared<InkSacItem>();
}
