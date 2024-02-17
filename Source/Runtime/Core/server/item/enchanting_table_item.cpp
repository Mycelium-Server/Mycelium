
#include "enchanting_table_item.h"

#include "../block/enchanting_table_block.h"

EnchantingTableItem::EnchantingTableItem() = default;
EnchantingTableItem::~EnchantingTableItem() = default;

int EnchantingTableItem::getID() const {
  return 330;
}

std::shared_ptr<Item> EnchantingTableItem::clone() const {
  return std::make_shared<EnchantingTableItem>();
}

int EnchantingTableItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EnchantingTableBlock().getId();
}
