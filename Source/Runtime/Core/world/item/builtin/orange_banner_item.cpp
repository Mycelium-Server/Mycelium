
#include "orange_banner_item.h"

#include "../../block/builtin/orange_banner_block.h"

OrangeBannerItem::OrangeBannerItem() = default;
OrangeBannerItem::~OrangeBannerItem() = default;

int OrangeBannerItem::getID() const {
  return 1026;
}

std::shared_ptr<Item> OrangeBannerItem::clone() const {
  return std::make_shared<OrangeBannerItem>();
}

int OrangeBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeBannerBlock().getId();
}