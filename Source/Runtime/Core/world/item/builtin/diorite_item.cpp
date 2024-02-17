
#include "diorite_item.h"

#include "../../block/builtin/diorite_block.h"

DioriteItem::DioriteItem() = default;
DioriteItem::~DioriteItem() = default;

int DioriteItem::getID() const {
  return 4;
}

std::shared_ptr<Item> DioriteItem::clone() const {
  return std::make_shared<DioriteItem>();
}

int DioriteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DioriteBlock().getId();
}