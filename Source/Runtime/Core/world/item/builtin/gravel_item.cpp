
#include "gravel_item.h"

#include "../../block/builtin/gravel_block.h"

GravelItem::GravelItem() = default;
GravelItem::~GravelItem() = default;

int GravelItem::getID() const {
  return 42;
}

std::shared_ptr<Item> GravelItem::clone() const {
  return std::make_shared<GravelItem>();
}

int GravelItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GravelBlock().getId();
}
