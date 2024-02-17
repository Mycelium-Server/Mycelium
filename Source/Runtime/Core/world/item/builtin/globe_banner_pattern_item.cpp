
#include "globe_banner_pattern_item.h"

GlobeBannerPatternItem::GlobeBannerPatternItem() = default;
GlobeBannerPatternItem::~GlobeBannerPatternItem() = default;

int GlobeBannerPatternItem::getID() const {
  return 1085;
}

std::shared_ptr<Item> GlobeBannerPatternItem::clone() const {
  return std::make_shared<GlobeBannerPatternItem>();
}
