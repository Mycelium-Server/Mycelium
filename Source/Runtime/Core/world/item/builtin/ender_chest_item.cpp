
#include "ender_chest_item.h"

#include "../../block/builtin/ender_chest_block.h"

EnderChestItem::EnderChestItem() = default;
EnderChestItem::~EnderChestItem() = default;

int EnderChestItem::getID() const {
  return 336;
}

std::shared_ptr<Item> EnderChestItem::clone() const {
  return std::make_shared<EnderChestItem>();
}

int EnderChestItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EnderChestBlock().getId();
}