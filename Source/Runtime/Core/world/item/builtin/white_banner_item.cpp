
#include "white_banner_item.h"

#include "../../block/builtin/white_banner_block.h"

WhiteBannerItem::WhiteBannerItem() = default;
WhiteBannerItem::~WhiteBannerItem() = default;

int WhiteBannerItem::getID() const {
  return 1025;
}

std::shared_ptr<Item> WhiteBannerItem::clone() const {
  return std::make_shared<WhiteBannerItem>();
}

int WhiteBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteBannerBlock().getId();
}