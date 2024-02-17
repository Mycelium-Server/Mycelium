
#include "crafting_table_item.h"

#include "../block/crafting_table_block.h"

CraftingTableItem::CraftingTableItem() = default;
CraftingTableItem::~CraftingTableItem() = default;

int CraftingTableItem::getID() const {
  return 257;
}

std::shared_ptr<Item> CraftingTableItem::clone() const {
  return std::make_shared<CraftingTableItem>();
}

int CraftingTableItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CraftingTableBlock().getId();
}