
#include "purple_banner_item.h"

#include "../../block/builtin/purple_banner_block.h"

PurpleBannerItem::PurpleBannerItem() = default;
PurpleBannerItem::~PurpleBannerItem() = default;

int PurpleBannerItem::getID() const {
  return 1035;
}

std::shared_ptr<Item> PurpleBannerItem::clone() const {
  return std::make_shared<PurpleBannerItem>();
}

int PurpleBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleBannerBlock().getId();
}