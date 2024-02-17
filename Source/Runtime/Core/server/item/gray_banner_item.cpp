
#include "gray_banner_item.h"

#include "../block/gray_banner_block.h"

GrayBannerItem::GrayBannerItem() = default;
GrayBannerItem::~GrayBannerItem() = default;

int GrayBannerItem::getID() const {
  return 1032;
}

std::shared_ptr<Item> GrayBannerItem::clone() const {
  return std::make_shared<GrayBannerItem>();
}

int GrayBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayBannerBlock().getId();
}