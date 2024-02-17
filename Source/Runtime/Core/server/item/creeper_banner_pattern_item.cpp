
#include "creeper_banner_pattern_item.h"

CreeperBannerPatternItem::CreeperBannerPatternItem() = default;
CreeperBannerPatternItem::~CreeperBannerPatternItem() = default;

int CreeperBannerPatternItem::getID() const {
  return 1082;
}

std::shared_ptr<Item> CreeperBannerPatternItem::clone() const {
  return std::make_shared<CreeperBannerPatternItem>();
}
