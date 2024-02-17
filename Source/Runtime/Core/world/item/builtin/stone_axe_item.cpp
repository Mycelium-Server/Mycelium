
#include "stone_axe_item.h"

StoneAxeItem::StoneAxeItem() = default;
StoneAxeItem::~StoneAxeItem() = default;

int StoneAxeItem::getID() const {
  return 743;
}

std::shared_ptr<Item> StoneAxeItem::clone() const {
  return std::make_shared<StoneAxeItem>();
}
