
#include "dark_oak_log_item.h"

#include "../../block/builtin/dark_oak_log_block.h"

DarkOakLogItem::DarkOakLogItem() = default;
DarkOakLogItem::~DarkOakLogItem() = default;

int DarkOakLogItem::getID() const {
  return 109;
}

std::shared_ptr<Item> DarkOakLogItem::clone() const {
  return std::make_shared<DarkOakLogItem>();
}

int DarkOakLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakLogBlock().getId();
}