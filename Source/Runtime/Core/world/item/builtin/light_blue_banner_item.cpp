
#include "light_blue_banner_item.h"

#include "../../block/builtin/light_blue_banner_block.h"

LightBlueBannerItem::LightBlueBannerItem() = default;
LightBlueBannerItem::~LightBlueBannerItem() = default;

int LightBlueBannerItem::getID() const {
  return 1028;
}

std::shared_ptr<Item> LightBlueBannerItem::clone() const {
  return std::make_shared<LightBlueBannerItem>();
}

int LightBlueBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueBannerBlock().getId();
}