
#include "spore_blossom_item.h"

#include "../../block/builtin/spore_blossom_block.h"

SporeBlossomItem::SporeBlossomItem() = default;
SporeBlossomItem::~SporeBlossomItem() = default;

int SporeBlossomItem::getID() const {
  return 196;
}

std::shared_ptr<Item> SporeBlossomItem::clone() const {
  return std::make_shared<SporeBlossomItem>();
}

int SporeBlossomItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SporeBlossomBlock().getId();
}