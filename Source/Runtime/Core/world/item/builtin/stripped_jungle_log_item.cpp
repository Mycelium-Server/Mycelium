
#include "stripped_jungle_log_item.h"

#include "../../block/builtin/stripped_jungle_log_block.h"

StrippedJungleLogItem::StrippedJungleLogItem() = default;
StrippedJungleLogItem::~StrippedJungleLogItem() = default;

int StrippedJungleLogItem::getID() const {
  return 118;
}

std::shared_ptr<Item> StrippedJungleLogItem::clone() const {
  return std::make_shared<StrippedJungleLogItem>();
}

int StrippedJungleLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedJungleLogBlock().getId();
}
