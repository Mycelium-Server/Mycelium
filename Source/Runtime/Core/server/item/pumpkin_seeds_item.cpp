
#include "pumpkin_seeds_item.h"

PumpkinSeedsItem::PumpkinSeedsItem() = default;
PumpkinSeedsItem::~PumpkinSeedsItem() = default;

int PumpkinSeedsItem::getID() const {
  return 890;
}

std::shared_ptr<Item> PumpkinSeedsItem::clone() const {
  return std::make_shared<PumpkinSeedsItem>();
}
