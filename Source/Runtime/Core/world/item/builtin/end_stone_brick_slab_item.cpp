
#include "end_stone_brick_slab_item.h"

#include "../../block/builtin/end_stone_brick_slab_block.h"

EndStoneBrickSlabItem::EndStoneBrickSlabItem() = default;
EndStoneBrickSlabItem::~EndStoneBrickSlabItem() = default;

int EndStoneBrickSlabItem::getID() const {
  return 595;
}

std::shared_ptr<Item> EndStoneBrickSlabItem::clone() const {
  return std::make_shared<EndStoneBrickSlabItem>();
}

int EndStoneBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EndStoneBrickSlabBlock().getId();
}
