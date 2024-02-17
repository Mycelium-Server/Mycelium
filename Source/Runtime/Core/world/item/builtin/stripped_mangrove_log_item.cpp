
#include "stripped_mangrove_log_item.h"

#include "../../block/builtin/stripped_mangrove_log_block.h"

StrippedMangroveLogItem::StrippedMangroveLogItem() = default;
StrippedMangroveLogItem::~StrippedMangroveLogItem() = default;

int StrippedMangroveLogItem::getID() const {
  return 121;
}

std::shared_ptr<Item> StrippedMangroveLogItem::clone() const {
  return std::make_shared<StrippedMangroveLogItem>();
}

int StrippedMangroveLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedMangroveLogBlock().getId();
}
