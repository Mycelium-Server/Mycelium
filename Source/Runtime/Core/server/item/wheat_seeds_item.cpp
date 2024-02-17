
#include "wheat_seeds_item.h"

WheatSeedsItem::WheatSeedsItem() = default;
WheatSeedsItem::~WheatSeedsItem() = default;

int WheatSeedsItem::getID() const {
  return 771;
}

std::shared_ptr<Item> WheatSeedsItem::clone() const {
  return std::make_shared<WheatSeedsItem>();
}
