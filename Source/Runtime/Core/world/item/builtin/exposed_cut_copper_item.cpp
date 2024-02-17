
#include "exposed_cut_copper_item.h"

#include "../../block/builtin/exposed_cut_copper_block.h"

ExposedCutCopperItem::ExposedCutCopperItem() = default;
ExposedCutCopperItem::~ExposedCutCopperItem() = default;

int ExposedCutCopperItem::getID() const {
  return 77;
}

std::shared_ptr<Item> ExposedCutCopperItem::clone() const {
  return std::make_shared<ExposedCutCopperItem>();
}

int ExposedCutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ExposedCutCopperBlock().getId();
}