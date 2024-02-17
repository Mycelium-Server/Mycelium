
#include "brown_banner_item.h"

#include "../../block/builtin/brown_banner_block.h"

BrownBannerItem::BrownBannerItem() = default;
BrownBannerItem::~BrownBannerItem() = default;

int BrownBannerItem::getID() const {
  return 1037;
}

std::shared_ptr<Item> BrownBannerItem::clone() const {
  return std::make_shared<BrownBannerItem>();
}

int BrownBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownBannerBlock().getId();
}