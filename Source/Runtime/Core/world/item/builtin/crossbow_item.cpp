
#include "crossbow_item.h"

CrossbowItem::CrossbowItem() = default;
CrossbowItem::~CrossbowItem() = default;

int CrossbowItem::getID() const {
  return 1078;
}

std::shared_ptr<Item> CrossbowItem::clone() const {
  return std::make_shared<CrossbowItem>();
}
