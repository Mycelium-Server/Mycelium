
#include "white_shulker_box_item.h"

#include "../../block/builtin/white_shulker_box_block.h"

WhiteShulkerBoxItem::WhiteShulkerBoxItem() = default;
WhiteShulkerBoxItem::~WhiteShulkerBoxItem() = default;

int WhiteShulkerBoxItem::getID() const {
  return 475;
}

std::shared_ptr<Item> WhiteShulkerBoxItem::clone() const {
  return std::make_shared<WhiteShulkerBoxItem>();
}

int WhiteShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteShulkerBoxBlock().getId();
}