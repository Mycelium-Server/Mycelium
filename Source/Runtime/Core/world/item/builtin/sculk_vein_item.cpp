
#include "sculk_vein_item.h"

#include "../../block/builtin/sculk_vein_block.h"

SculkVeinItem::SculkVeinItem() = default;
SculkVeinItem::~SculkVeinItem() = default;

int SculkVeinItem::getID() const {
  return 327;
}

std::shared_ptr<Item> SculkVeinItem::clone() const {
  return std::make_shared<SculkVeinItem>();
}

int SculkVeinItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SculkVeinBlock().getId();
}