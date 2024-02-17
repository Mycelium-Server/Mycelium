
#include "slime_block_item.h"

#include "../../block/builtin/slime_block_block.h"

SlimeBlockItem::SlimeBlockItem() = default;
SlimeBlockItem::~SlimeBlockItem() = default;

int SlimeBlockItem::getID() const {
  return 615;
}

std::shared_ptr<Item> SlimeBlockItem::clone() const {
  return std::make_shared<SlimeBlockItem>();
}

int SlimeBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SlimeBlockBlock().getId();
}