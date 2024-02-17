
#include "black_shulker_box_item.h"

#include "../../block/builtin/black_shulker_box_block.h"

BlackShulkerBoxItem::BlackShulkerBoxItem() = default;
BlackShulkerBoxItem::~BlackShulkerBoxItem() = default;

int BlackShulkerBoxItem::getID() const {
  return 490;
}

std::shared_ptr<Item> BlackShulkerBoxItem::clone() const {
  return std::make_shared<BlackShulkerBoxItem>();
}

int BlackShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackShulkerBoxBlock().getId();
}