
#include "stripped_oak_log_item.h"

#include "../block/stripped_oak_log_block.h"

StrippedOakLogItem::StrippedOakLogItem() = default;
StrippedOakLogItem::~StrippedOakLogItem() = default;

int StrippedOakLogItem::getID() const {
  return 115;
}

std::shared_ptr<Item> StrippedOakLogItem::clone() const {
  return std::make_shared<StrippedOakLogItem>();
}

int StrippedOakLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedOakLogBlock().getId();
}