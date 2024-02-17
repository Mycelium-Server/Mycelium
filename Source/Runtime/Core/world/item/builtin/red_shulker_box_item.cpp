
#include "red_shulker_box_item.h"

#include "../../block/builtin/red_shulker_box_block.h"

RedShulkerBoxItem::RedShulkerBoxItem() = default;
RedShulkerBoxItem::~RedShulkerBoxItem() = default;

int RedShulkerBoxItem::getID() const {
  return 489;
}

std::shared_ptr<Item> RedShulkerBoxItem::clone() const {
  return std::make_shared<RedShulkerBoxItem>();
}

int RedShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedShulkerBoxBlock().getId();
}