
#include "skull_banner_pattern_item.h"

SkullBannerPatternItem::SkullBannerPatternItem() = default;
SkullBannerPatternItem::~SkullBannerPatternItem() = default;

int SkullBannerPatternItem::getID() const {
  return 1083;
}

std::shared_ptr<Item> SkullBannerPatternItem::clone() const {
  return std::make_shared<SkullBannerPatternItem>();
}
