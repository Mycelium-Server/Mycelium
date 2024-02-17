
#include "mangrove_log_item.h"

#include "../block/mangrove_log_block.h"

MangroveLogItem::MangroveLogItem() = default;
MangroveLogItem::~MangroveLogItem() = default;

int MangroveLogItem::getID() const {
  return 110;
}

std::shared_ptr<Item> MangroveLogItem::clone() const {
  return std::make_shared<MangroveLogItem>();
}

int MangroveLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveLogBlock().getId();
}