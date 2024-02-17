
#include "pink_shulker_box_item.h"

#include "../../block/builtin/pink_shulker_box_block.h"

PinkShulkerBoxItem::PinkShulkerBoxItem() = default;
PinkShulkerBoxItem::~PinkShulkerBoxItem() = default;

int PinkShulkerBoxItem::getID() const {
  return 481;
}

std::shared_ptr<Item> PinkShulkerBoxItem::clone() const {
  return std::make_shared<PinkShulkerBoxItem>();
}

int PinkShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkShulkerBoxBlock().getId();
}