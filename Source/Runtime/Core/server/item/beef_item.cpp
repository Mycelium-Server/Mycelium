
#include "beef_item.h"

BeefItem::BeefItem() = default;
BeefItem::~BeefItem() = default;

int BeefItem::getID() const {
  return 892;
}

std::shared_ptr<Item> BeefItem::clone() const {
  return std::make_shared<BeefItem>();
}
