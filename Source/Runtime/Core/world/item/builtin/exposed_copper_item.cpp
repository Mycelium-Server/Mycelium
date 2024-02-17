
#include "exposed_copper_item.h"

#include "../../block/builtin/exposed_copper_block.h"

ExposedCopperItem::ExposedCopperItem() = default;
ExposedCopperItem::~ExposedCopperItem() = default;

int ExposedCopperItem::getID() const {
  return 73;
}

std::shared_ptr<Item> ExposedCopperItem::clone() const {
  return std::make_shared<ExposedCopperItem>();
}

int ExposedCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ExposedCopperBlock().getId();
}