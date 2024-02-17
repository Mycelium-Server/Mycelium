
#include "fletching_table_item.h"

#include "../block/fletching_table_block.h"

FletchingTableItem::FletchingTableItem() = default;
FletchingTableItem::~FletchingTableItem() = default;

int FletchingTableItem::getID() const {
  return 1093;
}

std::shared_ptr<Item> FletchingTableItem::clone() const {
  return std::make_shared<FletchingTableItem>();
}

int FletchingTableItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FletchingTableBlock().getId();
}