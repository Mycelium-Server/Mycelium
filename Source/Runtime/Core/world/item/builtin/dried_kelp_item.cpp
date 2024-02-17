
#include "dried_kelp_item.h"

DriedKelpItem::DriedKelpItem() = default;
DriedKelpItem::~DriedKelpItem() = default;

int DriedKelpItem::getID() const {
  return 889;
}

std::shared_ptr<Item> DriedKelpItem::clone() const {
  return std::make_shared<DriedKelpItem>();
}
