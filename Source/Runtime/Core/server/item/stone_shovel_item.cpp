
#include "stone_shovel_item.h"

StoneShovelItem::StoneShovelItem() = default;
StoneShovelItem::~StoneShovelItem() = default;

int StoneShovelItem::getID() const {
  return 741;
}

std::shared_ptr<Item> StoneShovelItem::clone() const {
  return std::make_shared<StoneShovelItem>();
}
