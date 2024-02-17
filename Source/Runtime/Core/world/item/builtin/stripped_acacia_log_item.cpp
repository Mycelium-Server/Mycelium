
#include "stripped_acacia_log_item.h"

#include "../../block/builtin/stripped_acacia_log_block.h"

StrippedAcaciaLogItem::StrippedAcaciaLogItem() = default;
StrippedAcaciaLogItem::~StrippedAcaciaLogItem() = default;

int StrippedAcaciaLogItem::getID() const {
  return 119;
}

std::shared_ptr<Item> StrippedAcaciaLogItem::clone() const {
  return std::make_shared<StrippedAcaciaLogItem>();
}

int StrippedAcaciaLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedAcaciaLogBlock().getId();
}