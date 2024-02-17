
#include "comparator_item.h"

#include "../../block/builtin/comparator_block.h"

ComparatorItem::ComparatorItem() = default;
ComparatorItem::~ComparatorItem() = default;

int ComparatorItem::getID() const {
  return 612;
}

std::shared_ptr<Item> ComparatorItem::clone() const {
  return std::make_shared<ComparatorItem>();
}

int ComparatorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ComparatorBlock().getId();
}