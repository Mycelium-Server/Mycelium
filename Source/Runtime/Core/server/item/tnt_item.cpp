
#include "tnt_item.h"

#include "../block/tnt_block.h"

TntItem::TntItem() = default;
TntItem::~TntItem() = default;

int TntItem::getID() const {
  return 629;
}

std::shared_ptr<Item> TntItem::clone() const {
  return std::make_shared<TntItem>();
}

int TntItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TntBlock().getId();
}
