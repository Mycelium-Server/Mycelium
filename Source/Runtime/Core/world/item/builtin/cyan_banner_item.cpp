
#include "cyan_banner_item.h"

#include "../../block/builtin/cyan_banner_block.h"

CyanBannerItem::CyanBannerItem() = default;
CyanBannerItem::~CyanBannerItem() = default;

int CyanBannerItem::getID() const {
  return 1034;
}

std::shared_ptr<Item> CyanBannerItem::clone() const {
  return std::make_shared<CyanBannerItem>();
}

int CyanBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanBannerBlock().getId();
}