
#include "small_dripleaf_item.h"

#include "../block/small_dripleaf_block.h"

SmallDripleafItem::SmallDripleafItem() = default;
SmallDripleafItem::~SmallDripleafItem() = default;

int SmallDripleafItem::getID() const {
  return 212;
}

std::shared_ptr<Item> SmallDripleafItem::clone() const {
  return std::make_shared<SmallDripleafItem>();
}

int SmallDripleafItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmallDripleafBlock().getId();
}