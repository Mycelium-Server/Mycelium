
#include "exposed_cut_copper_stairs_item.h"

#include "../../block/builtin/exposed_cut_copper_stairs_block.h"

ExposedCutCopperStairsItem::ExposedCutCopperStairsItem() = default;
ExposedCutCopperStairsItem::~ExposedCutCopperStairsItem() = default;

int ExposedCutCopperStairsItem::getID() const {
  return 81;
}

std::shared_ptr<Item> ExposedCutCopperStairsItem::clone() const {
  return std::make_shared<ExposedCutCopperStairsItem>();
}

int ExposedCutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ExposedCutCopperStairsBlock().getId();
}
