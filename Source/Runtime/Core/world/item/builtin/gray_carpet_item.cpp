
#include "gray_carpet_item.h"

#include "../../block/builtin/gray_carpet_block.h"

GrayCarpetItem::GrayCarpetItem() = default;
GrayCarpetItem::~GrayCarpetItem() = default;

int GrayCarpetItem::getID() const {
  return 405;
}

std::shared_ptr<Item> GrayCarpetItem::clone() const {
  return std::make_shared<GrayCarpetItem>();
}

int GrayCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayCarpetBlock().getId();
}