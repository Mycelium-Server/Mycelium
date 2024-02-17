
#include "sculk_shrieker_item.h"

#include "../../block/builtin/sculk_shrieker_block.h"

SculkShriekerItem::SculkShriekerItem() = default;
SculkShriekerItem::~SculkShriekerItem() = default;

int SculkShriekerItem::getID() const {
  return 329;
}

std::shared_ptr<Item> SculkShriekerItem::clone() const {
  return std::make_shared<SculkShriekerItem>();
}

int SculkShriekerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SculkShriekerBlock().getId();
}