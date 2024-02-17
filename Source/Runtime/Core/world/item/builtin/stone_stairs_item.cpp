
#include "stone_stairs_item.h"

#include "../../block/builtin/stone_stairs_block.h"

StoneStairsItem::StoneStairsItem() = default;
StoneStairsItem::~StoneStairsItem() = default;

int StoneStairsItem::getID() const {
  return 578;
}

std::shared_ptr<Item> StoneStairsItem::clone() const {
  return std::make_shared<StoneStairsItem>();
}

int StoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneStairsBlock().getId();
}