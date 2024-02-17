
#include "stone_hoe_item.h"

StoneHoeItem::StoneHoeItem() = default;
StoneHoeItem::~StoneHoeItem() = default;

int StoneHoeItem::getID() const {
  return 744;
}

std::shared_ptr<Item> StoneHoeItem::clone() const {
  return std::make_shared<StoneHoeItem>();
}
