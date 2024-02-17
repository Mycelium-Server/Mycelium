
#include "cyan_shulker_box_item.h"

#include "../../block/builtin/cyan_shulker_box_block.h"

CyanShulkerBoxItem::CyanShulkerBoxItem() = default;
CyanShulkerBoxItem::~CyanShulkerBoxItem() = default;

int CyanShulkerBoxItem::getID() const {
  return 484;
}

std::shared_ptr<Item> CyanShulkerBoxItem::clone() const {
  return std::make_shared<CyanShulkerBoxItem>();
}

int CyanShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanShulkerBoxBlock().getId();
}