
#include "oak_slab_item.h"

#include "../../block/builtin/oak_slab_block.h"

OakSlabItem::OakSlabItem() = default;
OakSlabItem::~OakSlabItem() = default;

int OakSlabItem::getID() const {
  return 214;
}

std::shared_ptr<Item> OakSlabItem::clone() const {
  return std::make_shared<OakSlabItem>();
}

int OakSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakSlabBlock().getId();
}