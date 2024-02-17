
#include "magma_block_item.h"

#include "../../block/builtin/magma_block_block.h"

MagmaBlockItem::MagmaBlockItem() = default;
MagmaBlockItem::~MagmaBlockItem() = default;

int MagmaBlockItem::getID() const {
  return 468;
}

std::shared_ptr<Item> MagmaBlockItem::clone() const {
  return std::make_shared<MagmaBlockItem>();
}

int MagmaBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagmaBlockBlock().getId();
}