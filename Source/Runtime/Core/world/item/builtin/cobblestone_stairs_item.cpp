
#include "cobblestone_stairs_item.h"

#include "../../block/builtin/cobblestone_stairs_block.h"

CobblestoneStairsItem::CobblestoneStairsItem() = default;
CobblestoneStairsItem::~CobblestoneStairsItem() = default;

int CobblestoneStairsItem::getID() const {
  return 261;
}

std::shared_ptr<Item> CobblestoneStairsItem::clone() const {
  return std::make_shared<CobblestoneStairsItem>();
}

int CobblestoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobblestoneStairsBlock().getId();
}