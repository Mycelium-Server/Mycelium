
#include "weathered_cut_copper_item.h"

#include "../../block/builtin/weathered_cut_copper_block.h"

WeatheredCutCopperItem::WeatheredCutCopperItem() = default;
WeatheredCutCopperItem::~WeatheredCutCopperItem() = default;

int WeatheredCutCopperItem::getID() const {
  return 78;
}

std::shared_ptr<Item> WeatheredCutCopperItem::clone() const {
  return std::make_shared<WeatheredCutCopperItem>();
}

int WeatheredCutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WeatheredCutCopperBlock().getId();
}
