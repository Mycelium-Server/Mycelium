
#include "red_banner_item.h"

#include "../block/red_banner_block.h"

RedBannerItem::RedBannerItem() = default;
RedBannerItem::~RedBannerItem() = default;

int RedBannerItem::getID() const {
  return 1039;
}

std::shared_ptr<Item> RedBannerItem::clone() const {
  return std::make_shared<RedBannerItem>();
}

int RedBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedBannerBlock().getId();
}