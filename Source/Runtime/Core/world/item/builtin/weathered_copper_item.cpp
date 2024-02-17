
#include "weathered_copper_item.h"

#include "../../block/builtin/weathered_copper_block.h"

WeatheredCopperItem::WeatheredCopperItem() = default;
WeatheredCopperItem::~WeatheredCopperItem() = default;

int WeatheredCopperItem::getID() const {
  return 74;
}

std::shared_ptr<Item> WeatheredCopperItem::clone() const {
  return std::make_shared<WeatheredCopperItem>();
}

int WeatheredCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WeatheredCopperBlock().getId();
}