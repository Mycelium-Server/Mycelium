
#include "quartz_block_item.h"

#include "../../block/builtin/quartz_block_block.h"

QuartzBlockItem::QuartzBlockItem() = default;
QuartzBlockItem::~QuartzBlockItem() = default;

int QuartzBlockItem::getID() const {
  return 375;
}

std::shared_ptr<Item> QuartzBlockItem::clone() const {
  return std::make_shared<QuartzBlockItem>();
}

int QuartzBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return QuartzBlockBlock().getId();
}