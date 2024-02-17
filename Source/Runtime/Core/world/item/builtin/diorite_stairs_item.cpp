
#include "diorite_stairs_item.h"

#include "../../block/builtin/diorite_stairs_block.h"

DioriteStairsItem::DioriteStairsItem() = default;
DioriteStairsItem::~DioriteStairsItem() = default;

int DioriteStairsItem::getID() const {
  return 585;
}

std::shared_ptr<Item> DioriteStairsItem::clone() const {
  return std::make_shared<DioriteStairsItem>();
}

int DioriteStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DioriteStairsBlock().getId();
}