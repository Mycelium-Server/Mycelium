
#include "snow_item.h"

#include "../../block/builtin/snow_block.h"

SnowItem::SnowItem() = default;
SnowItem::~SnowItem() = default;

int SnowItem::getID() const {
  return 262;
}

std::shared_ptr<Item> SnowItem::clone() const {
  return std::make_shared<SnowItem>();
}

int SnowItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SnowBlock().getId();
}