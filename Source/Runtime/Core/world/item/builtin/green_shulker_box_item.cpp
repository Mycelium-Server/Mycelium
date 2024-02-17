
#include "green_shulker_box_item.h"

#include "../../block/builtin/green_shulker_box_block.h"

GreenShulkerBoxItem::GreenShulkerBoxItem() = default;
GreenShulkerBoxItem::~GreenShulkerBoxItem() = default;

int GreenShulkerBoxItem::getID() const {
  return 488;
}

std::shared_ptr<Item> GreenShulkerBoxItem::clone() const {
  return std::make_shared<GreenShulkerBoxItem>();
}

int GreenShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenShulkerBoxBlock().getId();
}