
#include "redstone_ore_item.h"

#include "../block/redstone_ore_block.h"

RedstoneOreItem::RedstoneOreItem() = default;
RedstoneOreItem::~RedstoneOreItem() = default;

int RedstoneOreItem::getID() const {
  return 51;
}

std::shared_ptr<Item> RedstoneOreItem::clone() const {
  return std::make_shared<RedstoneOreItem>();
}

int RedstoneOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedstoneOreBlock().getId();
}