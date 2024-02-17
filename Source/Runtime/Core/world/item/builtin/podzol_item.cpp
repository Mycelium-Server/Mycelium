
#include "podzol_item.h"

#include "../../block/builtin/podzol_block.h"

PodzolItem::PodzolItem() = default;
PodzolItem::~PodzolItem() = default;

int PodzolItem::getID() const {
  return 17;
}

std::shared_ptr<Item> PodzolItem::clone() const {
  return std::make_shared<PodzolItem>();
}

int PodzolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PodzolBlock().getId();
}