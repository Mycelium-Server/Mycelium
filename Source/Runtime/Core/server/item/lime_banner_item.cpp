
#include "lime_banner_item.h"

#include "../block/lime_banner_block.h"

LimeBannerItem::LimeBannerItem() = default;
LimeBannerItem::~LimeBannerItem() = default;

int LimeBannerItem::getID() const {
  return 1030;
}

std::shared_ptr<Item> LimeBannerItem::clone() const {
  return std::make_shared<LimeBannerItem>();
}

int LimeBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeBannerBlock().getId();
}
