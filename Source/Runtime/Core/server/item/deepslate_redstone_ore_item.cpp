
#include "deepslate_redstone_ore_item.h"

#include "../block/deepslate_redstone_ore_block.h"

DeepslateRedstoneOreItem::DeepslateRedstoneOreItem() = default;
DeepslateRedstoneOreItem::~DeepslateRedstoneOreItem() = default;

int DeepslateRedstoneOreItem::getID() const {
  return 52;
}

std::shared_ptr<Item> DeepslateRedstoneOreItem::clone() const {
  return std::make_shared<DeepslateRedstoneOreItem>();
}

int DeepslateRedstoneOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateRedstoneOreBlock().getId();
}