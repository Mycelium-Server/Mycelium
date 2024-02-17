
#include "dark_oak_stairs_item.h"

#include "../../block/builtin/dark_oak_stairs_block.h"

DarkOakStairsItem::DarkOakStairsItem() = default;
DarkOakStairsItem::~DarkOakStairsItem() = default;

int DarkOakStairsItem::getID() const {
  return 343;
}

std::shared_ptr<Item> DarkOakStairsItem::clone() const {
  return std::make_shared<DarkOakStairsItem>();
}

int DarkOakStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakStairsBlock().getId();
}
