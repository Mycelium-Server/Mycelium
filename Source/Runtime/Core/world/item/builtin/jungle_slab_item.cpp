
#include "jungle_slab_item.h"

#include "../../block/builtin/jungle_slab_block.h"

JungleSlabItem::JungleSlabItem() = default;
JungleSlabItem::~JungleSlabItem() = default;

int JungleSlabItem::getID() const {
  return 217;
}

std::shared_ptr<Item> JungleSlabItem::clone() const {
  return std::make_shared<JungleSlabItem>();
}

int JungleSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleSlabBlock().getId();
}
