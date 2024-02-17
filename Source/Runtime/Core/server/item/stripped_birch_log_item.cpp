
#include "stripped_birch_log_item.h"

#include "../block/stripped_birch_log_block.h"

StrippedBirchLogItem::StrippedBirchLogItem() = default;
StrippedBirchLogItem::~StrippedBirchLogItem() = default;

int StrippedBirchLogItem::getID() const {
  return 117;
}

std::shared_ptr<Item> StrippedBirchLogItem::clone() const {
  return std::make_shared<StrippedBirchLogItem>();
}

int StrippedBirchLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedBirchLogBlock().getId();
}