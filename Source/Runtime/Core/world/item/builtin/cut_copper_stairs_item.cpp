
#include "cut_copper_stairs_item.h"

#include "../../block/builtin/cut_copper_stairs_block.h"

CutCopperStairsItem::CutCopperStairsItem() = default;
CutCopperStairsItem::~CutCopperStairsItem() = default;

int CutCopperStairsItem::getID() const {
  return 80;
}

std::shared_ptr<Item> CutCopperStairsItem::clone() const {
  return std::make_shared<CutCopperStairsItem>();
}

int CutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CutCopperStairsBlock().getId();
}