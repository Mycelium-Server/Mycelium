
#include "yellow_shulker_box_item.h"

#include "../block/yellow_shulker_box_block.h"

YellowShulkerBoxItem::YellowShulkerBoxItem() = default;
YellowShulkerBoxItem::~YellowShulkerBoxItem() = default;

int YellowShulkerBoxItem::getID() const {
  return 479;
}

std::shared_ptr<Item> YellowShulkerBoxItem::clone() const {
  return std::make_shared<YellowShulkerBoxItem>();
}

int YellowShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowShulkerBoxBlock().getId();
}
