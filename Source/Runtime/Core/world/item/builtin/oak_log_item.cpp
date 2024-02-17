
#include "oak_log_item.h"

#include "../../block/builtin/oak_log_block.h"

OakLogItem::OakLogItem() = default;
OakLogItem::~OakLogItem() = default;

int OakLogItem::getID() const {
  return 104;
}

std::shared_ptr<Item> OakLogItem::clone() const {
  return std::make_shared<OakLogItem>();
}

int OakLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakLogBlock().getId();
}