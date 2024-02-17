
#include "sugar_item.h"

SugarItem::SugarItem() = default;
SugarItem::~SugarItem() = default;

int SugarItem::getID() const {
  return 867;
}

std::shared_ptr<Item> SugarItem::clone() const {
  return std::make_shared<SugarItem>();
}
