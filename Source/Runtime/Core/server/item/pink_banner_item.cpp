
#include "pink_banner_item.h"

#include "../block/pink_banner_block.h"

PinkBannerItem::PinkBannerItem() = default;
PinkBannerItem::~PinkBannerItem() = default;

int PinkBannerItem::getID() const {
  return 1031;
}

std::shared_ptr<Item> PinkBannerItem::clone() const {
  return std::make_shared<PinkBannerItem>();
}

int PinkBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkBannerBlock().getId();
}