
#include "smithing_table_item.h"

#include "../../block/builtin/smithing_table_block.h"

SmithingTableItem::SmithingTableItem() = default;
SmithingTableItem::~SmithingTableItem() = default;

int SmithingTableItem::getID() const {
  return 1095;
}

std::shared_ptr<Item> SmithingTableItem::clone() const {
  return std::make_shared<SmithingTableItem>();
}

int SmithingTableItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmithingTableBlock().getId();
}