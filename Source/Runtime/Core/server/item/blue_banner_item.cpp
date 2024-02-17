
#include "blue_banner_item.h"

#include "../block/blue_banner_block.h"

BlueBannerItem::BlueBannerItem() = default;
BlueBannerItem::~BlueBannerItem() = default;

int BlueBannerItem::getID() const {
  return 1036;
}

std::shared_ptr<Item> BlueBannerItem::clone() const {
  return std::make_shared<BlueBannerItem>();
}

int BlueBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueBannerBlock().getId();
}