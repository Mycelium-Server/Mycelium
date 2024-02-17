
#include "gray_shulker_box_item.h"

#include "../../block/builtin/gray_shulker_box_block.h"

GrayShulkerBoxItem::GrayShulkerBoxItem() = default;
GrayShulkerBoxItem::~GrayShulkerBoxItem() = default;

int GrayShulkerBoxItem::getID() const {
  return 482;
}

std::shared_ptr<Item> GrayShulkerBoxItem::clone() const {
  return std::make_shared<GrayShulkerBoxItem>();
}

int GrayShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayShulkerBoxBlock().getId();
}