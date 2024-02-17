
#include "coal_item.h"

CoalItem::CoalItem() = default;
CoalItem::~CoalItem() = default;

int CoalItem::getID() const {
  return 720;
}

std::shared_ptr<Item> CoalItem::clone() const {
  return std::make_shared<CoalItem>();
}
