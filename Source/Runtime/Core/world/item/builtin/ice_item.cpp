
#include "ice_item.h"

#include "../../block/builtin/ice_block.h"

IceItem::IceItem() = default;
IceItem::~IceItem() = default;

int IceItem::getID() const {
  return 263;
}

std::shared_ptr<Item> IceItem::clone() const {
  return std::make_shared<IceItem>();
}

int IceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return IceBlock().getId();
}
