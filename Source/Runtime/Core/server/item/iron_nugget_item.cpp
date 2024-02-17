
#include "iron_nugget_item.h"

IronNuggetItem::IronNuggetItem() = default;
IronNuggetItem::~IronNuggetItem() = default;

int IronNuggetItem::getID() const {
  return 1055;
}

std::shared_ptr<Item> IronNuggetItem::clone() const {
  return std::make_shared<IronNuggetItem>();
}
