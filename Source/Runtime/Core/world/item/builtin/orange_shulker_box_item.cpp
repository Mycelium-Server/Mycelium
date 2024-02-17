
#include "orange_shulker_box_item.h"

#include "../../block/builtin/orange_shulker_box_block.h"

OrangeShulkerBoxItem::OrangeShulkerBoxItem() = default;
OrangeShulkerBoxItem::~OrangeShulkerBoxItem() = default;

int OrangeShulkerBoxItem::getID() const {
  return 476;
}

std::shared_ptr<Item> OrangeShulkerBoxItem::clone() const {
  return std::make_shared<OrangeShulkerBoxItem>();
}

int OrangeShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeShulkerBoxBlock().getId();
}