
#include "redstone_block_item.h"

#include "../../block/builtin/redstone_block_block.h"

RedstoneBlockItem::RedstoneBlockItem() = default;
RedstoneBlockItem::~RedstoneBlockItem() = default;

int RedstoneBlockItem::getID() const {
  return 610;
}

std::shared_ptr<Item> RedstoneBlockItem::clone() const {
  return std::make_shared<RedstoneBlockItem>();
}

int RedstoneBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedstoneBlockBlock().getId();
}