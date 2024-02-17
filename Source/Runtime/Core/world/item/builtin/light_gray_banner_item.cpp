
#include "light_gray_banner_item.h"

#include "../../block/builtin/light_gray_banner_block.h"

LightGrayBannerItem::LightGrayBannerItem() = default;
LightGrayBannerItem::~LightGrayBannerItem() = default;

int LightGrayBannerItem::getID() const {
  return 1033;
}

std::shared_ptr<Item> LightGrayBannerItem::clone() const {
  return std::make_shared<LightGrayBannerItem>();
}

int LightGrayBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayBannerBlock().getId();
}