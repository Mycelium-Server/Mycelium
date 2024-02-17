
#include "mojang_banner_pattern_item.h"

MojangBannerPatternItem::MojangBannerPatternItem() = default;
MojangBannerPatternItem::~MojangBannerPatternItem() = default;

int MojangBannerPatternItem::getID() const {
  return 1084;
}

std::shared_ptr<Item> MojangBannerPatternItem::clone() const {
  return std::make_shared<MojangBannerPatternItem>();
}
