
#include "netherite_block_item.h"

#include "../../block/builtin/netherite_block_block.h"

NetheriteBlockItem::NetheriteBlockItem() = default;
NetheriteBlockItem::~NetheriteBlockItem() = default;

int NetheriteBlockItem::getID() const {
  return 72;
}

std::shared_ptr<Item> NetheriteBlockItem::clone() const {
  return std::make_shared<NetheriteBlockItem>();
}

int NetheriteBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetheriteBlockBlock().getId();
}