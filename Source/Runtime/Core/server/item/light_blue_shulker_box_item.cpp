
#include "light_blue_shulker_box_item.h"

#include "../block/light_blue_shulker_box_block.h"

LightBlueShulkerBoxItem::LightBlueShulkerBoxItem() = default;
LightBlueShulkerBoxItem::~LightBlueShulkerBoxItem() = default;

int LightBlueShulkerBoxItem::getID() const {
  return 478;
}

std::shared_ptr<Item> LightBlueShulkerBoxItem::clone() const {
  return std::make_shared<LightBlueShulkerBoxItem>();
}

int LightBlueShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueShulkerBoxBlock().getId();
}