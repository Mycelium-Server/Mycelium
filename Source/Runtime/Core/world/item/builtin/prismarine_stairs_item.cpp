
#include "prismarine_stairs_item.h"

#include "../../block/builtin/prismarine_stairs_block.h"

PrismarineStairsItem::PrismarineStairsItem() = default;
PrismarineStairsItem::~PrismarineStairsItem() = default;

int PrismarineStairsItem::getID() const {
  return 458;
}

std::shared_ptr<Item> PrismarineStairsItem::clone() const {
  return std::make_shared<PrismarineStairsItem>();
}

int PrismarineStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PrismarineStairsBlock().getId();
}