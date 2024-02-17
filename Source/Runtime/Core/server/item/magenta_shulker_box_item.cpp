
#include "magenta_shulker_box_item.h"

#include "../block/magenta_shulker_box_block.h"

MagentaShulkerBoxItem::MagentaShulkerBoxItem() = default;
MagentaShulkerBoxItem::~MagentaShulkerBoxItem() = default;

int MagentaShulkerBoxItem::getID() const {
  return 477;
}

std::shared_ptr<Item> MagentaShulkerBoxItem::clone() const {
  return std::make_shared<MagentaShulkerBoxItem>();
}

int MagentaShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaShulkerBoxBlock().getId();
}
