
#include "cauldron_item.h"

#include "../../block/builtin/cauldron_block.h"

CauldronItem::CauldronItem() = default;
CauldronItem::~CauldronItem() = default;

int CauldronItem::getID() const {
  return 909;
}

std::shared_ptr<Item> CauldronItem::clone() const {
  return std::make_shared<CauldronItem>();
}

int CauldronItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CauldronBlock().getId();
}
