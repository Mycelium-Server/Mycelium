
#include "beetroot_seeds_item.h"

BeetrootSeedsItem::BeetrootSeedsItem() = default;
BeetrootSeedsItem::~BeetrootSeedsItem() = default;

int BeetrootSeedsItem::getID() const {
  return 1045;
}

std::shared_ptr<Item> BeetrootSeedsItem::clone() const {
  return std::make_shared<BeetrootSeedsItem>();
}
