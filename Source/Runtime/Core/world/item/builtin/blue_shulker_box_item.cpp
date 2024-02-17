
#include "blue_shulker_box_item.h"

#include "../../block/builtin/blue_shulker_box_block.h"

BlueShulkerBoxItem::BlueShulkerBoxItem() = default;
BlueShulkerBoxItem::~BlueShulkerBoxItem() = default;

int BlueShulkerBoxItem::getID() const {
  return 486;
}

std::shared_ptr<Item> BlueShulkerBoxItem::clone() const {
  return std::make_shared<BlueShulkerBoxItem>();
}

int BlueShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueShulkerBoxBlock().getId();
}
