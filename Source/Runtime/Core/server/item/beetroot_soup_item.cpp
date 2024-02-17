
#include "beetroot_soup_item.h"

BeetrootSoupItem::BeetrootSoupItem() = default;
BeetrootSoupItem::~BeetrootSoupItem() = default;

int BeetrootSoupItem::getID() const {
  return 1046;
}

std::shared_ptr<Item> BeetrootSoupItem::clone() const {
  return std::make_shared<BeetrootSoupItem>();
}
