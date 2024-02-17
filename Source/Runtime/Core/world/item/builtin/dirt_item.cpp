
#include "dirt_item.h"

#include "../../block/builtin/dirt_block.h"

DirtItem::DirtItem() = default;
DirtItem::~DirtItem() = default;

int DirtItem::getID() const {
  return 15;
}

std::shared_ptr<Item> DirtItem::clone() const {
  return std::make_shared<DirtItem>();
}

int DirtItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DirtBlock().getId();
}