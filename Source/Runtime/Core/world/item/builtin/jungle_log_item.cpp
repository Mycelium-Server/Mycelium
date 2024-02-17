
#include "jungle_log_item.h"

#include "../../block/builtin/jungle_log_block.h"

JungleLogItem::JungleLogItem() = default;
JungleLogItem::~JungleLogItem() = default;

int JungleLogItem::getID() const {
  return 107;
}

std::shared_ptr<Item> JungleLogItem::clone() const {
  return std::make_shared<JungleLogItem>();
}

int JungleLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleLogBlock().getId();
}