
#include "birch_log_item.h"

#include "../block/birch_log_block.h"

BirchLogItem::BirchLogItem() = default;
BirchLogItem::~BirchLogItem() = default;

int BirchLogItem::getID() const {
  return 106;
}

std::shared_ptr<Item> BirchLogItem::clone() const {
  return std::make_shared<BirchLogItem>();
}

int BirchLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchLogBlock().getId();
}
