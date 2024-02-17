
#include "piglin_banner_pattern_item.h"

PiglinBannerPatternItem::PiglinBannerPatternItem() = default;
PiglinBannerPatternItem::~PiglinBannerPatternItem() = default;

int PiglinBannerPatternItem::getID() const {
  return 1086;
}

std::shared_ptr<Item> PiglinBannerPatternItem::clone() const {
  return std::make_shared<PiglinBannerPatternItem>();
}
