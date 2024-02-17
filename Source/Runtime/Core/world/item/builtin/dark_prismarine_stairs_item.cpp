
#include "dark_prismarine_stairs_item.h"

#include "../../block/builtin/dark_prismarine_stairs_block.h"

DarkPrismarineStairsItem::DarkPrismarineStairsItem() = default;
DarkPrismarineStairsItem::~DarkPrismarineStairsItem() = default;

int DarkPrismarineStairsItem::getID() const {
  return 460;
}

std::shared_ptr<Item> DarkPrismarineStairsItem::clone() const {
  return std::make_shared<DarkPrismarineStairsItem>();
}

int DarkPrismarineStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkPrismarineStairsBlock().getId();
}