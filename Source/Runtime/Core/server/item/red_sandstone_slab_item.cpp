
#include "red_sandstone_slab_item.h"

#include "../block/red_sandstone_slab_block.h"

RedSandstoneSlabItem::RedSandstoneSlabItem() = default;
RedSandstoneSlabItem::~RedSandstoneSlabItem() = default;

int RedSandstoneSlabItem::getID() const {
  return 234;
}

std::shared_ptr<Item> RedSandstoneSlabItem::clone() const {
  return std::make_shared<RedSandstoneSlabItem>();
}

int RedSandstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedSandstoneSlabBlock().getId();
}