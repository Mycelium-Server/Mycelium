
#include "green_banner_item.h"

#include "../../block/builtin/green_banner_block.h"

GreenBannerItem::GreenBannerItem() = default;
GreenBannerItem::~GreenBannerItem() = default;

int GreenBannerItem::getID() const {
  return 1038;
}

std::shared_ptr<Item> GreenBannerItem::clone() const {
  return std::make_shared<GreenBannerItem>();
}

int GreenBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenBannerBlock().getId();
}