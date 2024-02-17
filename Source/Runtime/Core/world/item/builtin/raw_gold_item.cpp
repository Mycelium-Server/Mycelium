
#include "raw_gold_item.h"

RawGoldItem::RawGoldItem() = default;
RawGoldItem::~RawGoldItem() = default;

int RawGoldItem::getID() const {
  return 731;
}

std::shared_ptr<Item> RawGoldItem::clone() const {
  return std::make_shared<RawGoldItem>();
}
