
#include "flower_banner_pattern_item.h"

FlowerBannerPatternItem::FlowerBannerPatternItem() = default;
FlowerBannerPatternItem::~FlowerBannerPatternItem() = default;

int FlowerBannerPatternItem::getID() const {
  return 1081;
}

std::shared_ptr<Item> FlowerBannerPatternItem::clone() const {
  return std::make_shared<FlowerBannerPatternItem>();
}
