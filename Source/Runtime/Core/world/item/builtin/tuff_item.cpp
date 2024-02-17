
#include "tuff_item.h"

#include "../../block/builtin/tuff_block.h"

TuffItem::TuffItem() = default;
TuffItem::~TuffItem() = default;

int TuffItem::getID() const {
  return 12;
}

std::shared_ptr<Item> TuffItem::clone() const {
  return std::make_shared<TuffItem>();
}

int TuffItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TuffBlock().getId();
}