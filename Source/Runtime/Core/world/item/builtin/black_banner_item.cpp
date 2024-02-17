
#include "black_banner_item.h"

#include "../../block/builtin/black_banner_block.h"

BlackBannerItem::BlackBannerItem() = default;
BlackBannerItem::~BlackBannerItem() = default;

int BlackBannerItem::getID() const {
  return 1040;
}

std::shared_ptr<Item> BlackBannerItem::clone() const {
  return std::make_shared<BlackBannerItem>();
}

int BlackBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackBannerBlock().getId();
}