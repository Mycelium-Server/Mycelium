
#include "shulker_box_item.h"

#include "../../block/builtin/shulker_box_block.h"

ShulkerBoxItem::ShulkerBoxItem() = default;
ShulkerBoxItem::~ShulkerBoxItem() = default;

int ShulkerBoxItem::getID() const {
  return 474;
}

std::shared_ptr<Item> ShulkerBoxItem::clone() const {
  return std::make_shared<ShulkerBoxItem>();
}

int ShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ShulkerBoxBlock().getId();
}