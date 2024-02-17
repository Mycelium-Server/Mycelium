
#include "polished_blackstone_slab_item.h"

#include "../../block/builtin/polished_blackstone_slab_block.h"

PolishedBlackstoneSlabItem::PolishedBlackstoneSlabItem() = default;
PolishedBlackstoneSlabItem::~PolishedBlackstoneSlabItem() = default;

int PolishedBlackstoneSlabItem::getID() const {
  return 1117;
}

std::shared_ptr<Item> PolishedBlackstoneSlabItem::clone() const {
  return std::make_shared<PolishedBlackstoneSlabItem>();
}

int PolishedBlackstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneSlabBlock().getId();
}