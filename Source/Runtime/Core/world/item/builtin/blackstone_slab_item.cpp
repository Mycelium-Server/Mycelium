
#include "blackstone_slab_item.h"

#include "../../block/builtin/blackstone_slab_block.h"

BlackstoneSlabItem::BlackstoneSlabItem() = default;
BlackstoneSlabItem::~BlackstoneSlabItem() = default;

int BlackstoneSlabItem::getID() const {
  return 1113;
}

std::shared_ptr<Item> BlackstoneSlabItem::clone() const {
  return std::make_shared<BlackstoneSlabItem>();
}

int BlackstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackstoneSlabBlock().getId();
}
