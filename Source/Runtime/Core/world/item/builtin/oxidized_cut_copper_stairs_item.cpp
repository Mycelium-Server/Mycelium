
#include "oxidized_cut_copper_stairs_item.h"

#include "../../block/builtin/oxidized_cut_copper_stairs_block.h"

OxidizedCutCopperStairsItem::OxidizedCutCopperStairsItem() = default;
OxidizedCutCopperStairsItem::~OxidizedCutCopperStairsItem() = default;

int OxidizedCutCopperStairsItem::getID() const {
  return 83;
}

std::shared_ptr<Item> OxidizedCutCopperStairsItem::clone() const {
  return std::make_shared<OxidizedCutCopperStairsItem>();
}

int OxidizedCutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OxidizedCutCopperStairsBlock().getId();
}