
#include "cake_item.h"

#include "../../block/builtin/cake_block.h"

CakeItem::CakeItem() = default;
CakeItem::~CakeItem() = default;

int CakeItem::getID() const {
  return 868;
}

std::shared_ptr<Item> CakeItem::clone() const {
  return std::make_shared<CakeItem>();
}

int CakeItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CakeBlock().getId();
}