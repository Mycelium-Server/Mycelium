
#include "conduit_item.h"

#include "../../block/builtin/conduit_block.h"

ConduitItem::ConduitItem() = default;
ConduitItem::~ConduitItem() = default;

int ConduitItem::getID() const {
  return 571;
}

std::shared_ptr<Item> ConduitItem::clone() const {
  return std::make_shared<ConduitItem>();
}

int ConduitItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ConduitBlock().getId();
}