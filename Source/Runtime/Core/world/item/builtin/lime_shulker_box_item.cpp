
#include "lime_shulker_box_item.h"

#include "../../block/builtin/lime_shulker_box_block.h"

LimeShulkerBoxItem::LimeShulkerBoxItem() = default;
LimeShulkerBoxItem::~LimeShulkerBoxItem() = default;

int LimeShulkerBoxItem::getID() const {
  return 480;
}

std::shared_ptr<Item> LimeShulkerBoxItem::clone() const {
  return std::make_shared<LimeShulkerBoxItem>();
}

int LimeShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeShulkerBoxBlock().getId();
}