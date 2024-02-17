
#include "spruce_log_item.h"

#include "../../block/builtin/spruce_log_block.h"

SpruceLogItem::SpruceLogItem() = default;
SpruceLogItem::~SpruceLogItem() = default;

int SpruceLogItem::getID() const {
  return 105;
}

std::shared_ptr<Item> SpruceLogItem::clone() const {
  return std::make_shared<SpruceLogItem>();
}

int SpruceLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceLogBlock().getId();
}