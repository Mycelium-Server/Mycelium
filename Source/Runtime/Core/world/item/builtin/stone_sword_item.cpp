
#include "stone_sword_item.h"

StoneSwordItem::StoneSwordItem() = default;
StoneSwordItem::~StoneSwordItem() = default;

int StoneSwordItem::getID() const {
  return 740;
}

std::shared_ptr<Item> StoneSwordItem::clone() const {
  return std::make_shared<StoneSwordItem>();
}
