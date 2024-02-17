
#include "purple_shulker_box_item.h"

#include "../../block/builtin/purple_shulker_box_block.h"

PurpleShulkerBoxItem::PurpleShulkerBoxItem() = default;
PurpleShulkerBoxItem::~PurpleShulkerBoxItem() = default;

int PurpleShulkerBoxItem::getID() const {
  return 485;
}

std::shared_ptr<Item> PurpleShulkerBoxItem::clone() const {
  return std::make_shared<PurpleShulkerBoxItem>();
}

int PurpleShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleShulkerBoxBlock().getId();
}
