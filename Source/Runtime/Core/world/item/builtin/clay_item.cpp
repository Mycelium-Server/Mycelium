
#include "clay_item.h"

#include "../../block/builtin/clay_block.h"

ClayItem::ClayItem() = default;
ClayItem::~ClayItem() = default;

int ClayItem::getID() const {
  return 266;
}

std::shared_ptr<Item> ClayItem::clone() const {
  return std::make_shared<ClayItem>();
}

int ClayItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ClayBlock().getId();
}
