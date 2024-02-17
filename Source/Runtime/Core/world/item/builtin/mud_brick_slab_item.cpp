
#include "mud_brick_slab_item.h"

#include "../../block/builtin/mud_brick_slab_block.h"

MudBrickSlabItem::MudBrickSlabItem() = default;
MudBrickSlabItem::~MudBrickSlabItem() = default;

int MudBrickSlabItem::getID() const {
  return 231;
}

std::shared_ptr<Item> MudBrickSlabItem::clone() const {
  return std::make_shared<MudBrickSlabItem>();
}

int MudBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MudBrickSlabBlock().getId();
}
