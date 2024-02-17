
#include "stripped_dark_oak_log_item.h"

#include "../block/stripped_dark_oak_log_block.h"

StrippedDarkOakLogItem::StrippedDarkOakLogItem() = default;
StrippedDarkOakLogItem::~StrippedDarkOakLogItem() = default;

int StrippedDarkOakLogItem::getID() const {
  return 120;
}

std::shared_ptr<Item> StrippedDarkOakLogItem::clone() const {
  return std::make_shared<StrippedDarkOakLogItem>();
}

int StrippedDarkOakLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedDarkOakLogBlock().getId();
}