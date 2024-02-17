
#include "magenta_banner_item.h"

#include "../../block/builtin/magenta_banner_block.h"

MagentaBannerItem::MagentaBannerItem() = default;
MagentaBannerItem::~MagentaBannerItem() = default;

int MagentaBannerItem::getID() const {
  return 1027;
}

std::shared_ptr<Item> MagentaBannerItem::clone() const {
  return std::make_shared<MagentaBannerItem>();
}

int MagentaBannerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaBannerBlock().getId();
}