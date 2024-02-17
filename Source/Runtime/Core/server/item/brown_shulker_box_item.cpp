
#include "brown_shulker_box_item.h"

#include "../block/brown_shulker_box_block.h"

BrownShulkerBoxItem::BrownShulkerBoxItem() = default;
BrownShulkerBoxItem::~BrownShulkerBoxItem() = default;

int BrownShulkerBoxItem::getID() const {
  return 487;
}

std::shared_ptr<Item> BrownShulkerBoxItem::clone() const {
  return std::make_shared<BrownShulkerBoxItem>();
}

int BrownShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownShulkerBoxBlock().getId();
}