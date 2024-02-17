
#include "orange_dye_item.h"

OrangeDyeItem::OrangeDyeItem() = default;
OrangeDyeItem::~OrangeDyeItem() = default;

int OrangeDyeItem::getID() const {
  return 850;
}

std::shared_ptr<Item> OrangeDyeItem::clone() const {
  return std::make_shared<OrangeDyeItem>();
}
