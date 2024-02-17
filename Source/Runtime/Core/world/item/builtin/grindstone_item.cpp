
#include "grindstone_item.h"

#include "../../block/builtin/grindstone_block.h"

GrindstoneItem::GrindstoneItem() = default;
GrindstoneItem::~GrindstoneItem() = default;

int GrindstoneItem::getID() const {
  return 1094;
}

std::shared_ptr<Item> GrindstoneItem::clone() const {
  return std::make_shared<GrindstoneItem>();
}

int GrindstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrindstoneBlock().getId();
}
