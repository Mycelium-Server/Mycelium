
#include "weathered_cut_copper_stairs_item.h"

#include "../block/weathered_cut_copper_stairs_block.h"

WeatheredCutCopperStairsItem::WeatheredCutCopperStairsItem() = default;
WeatheredCutCopperStairsItem::~WeatheredCutCopperStairsItem() = default;

int WeatheredCutCopperStairsItem::getID() const {
  return 82;
}

std::shared_ptr<Item> WeatheredCutCopperStairsItem::clone() const {
  return std::make_shared<WeatheredCutCopperStairsItem>();
}

int WeatheredCutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WeatheredCutCopperStairsBlock().getId();
}