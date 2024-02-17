
#include "fire_charge_item.h"

FireChargeItem::FireChargeItem() = default;
FireChargeItem::~FireChargeItem() = default;

int FireChargeItem::getID() const {
  return 984;
}

std::shared_ptr<Item> FireChargeItem::clone() const {
  return std::make_shared<FireChargeItem>();
}
