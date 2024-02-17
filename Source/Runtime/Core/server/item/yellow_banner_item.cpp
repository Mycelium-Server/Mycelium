
#include "yellow_banner_item.h"

#include "../block/yellow_banner_block.h"

YellowBannerItem::YellowBannerItem() = default;
YellowBannerItem::~YellowBannerItem() = default;

int YellowBannerItem::getID() const {
  return 1029;
}

std::shared_ptr<Item> YellowBannerItem::clone() const {
  return std::make_shared<YellowBannerItem>();
}

int YellowBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowBannerBlock().getId();
}