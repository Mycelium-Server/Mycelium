
#include "stripped_spruce_log_item.h"

#include "../../block/builtin/stripped_spruce_log_block.h"

StrippedSpruceLogItem::StrippedSpruceLogItem() = default;
StrippedSpruceLogItem::~StrippedSpruceLogItem() = default;

int StrippedSpruceLogItem::getID() const {
  return 116;
}

std::shared_ptr<Item> StrippedSpruceLogItem::clone() const {
  return std::make_shared<StrippedSpruceLogItem>();
}

int StrippedSpruceLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedSpruceLogBlock().getId();
}