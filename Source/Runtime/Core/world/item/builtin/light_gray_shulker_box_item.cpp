
#include "light_gray_shulker_box_item.h"

#include "../../block/builtin/light_gray_shulker_box_block.h"

LightGrayShulkerBoxItem::LightGrayShulkerBoxItem() = default;
LightGrayShulkerBoxItem::~LightGrayShulkerBoxItem() = default;

int LightGrayShulkerBoxItem::getID() const {
  return 483;
}

std::shared_ptr<Item> LightGrayShulkerBoxItem::clone() const {
  return std::make_shared<LightGrayShulkerBoxItem>();
}

int LightGrayShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayShulkerBoxBlock().getId();
}