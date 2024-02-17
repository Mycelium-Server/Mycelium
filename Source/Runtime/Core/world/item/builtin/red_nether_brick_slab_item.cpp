
#include "red_nether_brick_slab_item.h"

#include "../../block/builtin/red_nether_brick_slab_block.h"

RedNetherBrickSlabItem::RedNetherBrickSlabItem() = default;
RedNetherBrickSlabItem::~RedNetherBrickSlabItem() = default;

int RedNetherBrickSlabItem::getID() const {
  return 600;
}

std::shared_ptr<Item> RedNetherBrickSlabItem::clone() const {
  return std::make_shared<RedNetherBrickSlabItem>();
}

int RedNetherBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedNetherBrickSlabBlock().getId();
}