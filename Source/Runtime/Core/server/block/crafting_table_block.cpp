

#include "crafting_table_block.h"

CraftingTableBlock::CraftingTableBlock() = default;
CraftingTableBlock::~CraftingTableBlock() = default;

short CraftingTableBlock::getId() const {
  return 3611;
}

std::shared_ptr<Block> CraftingTableBlock::clone() const {
  std::shared_ptr<CraftingTableBlock> copy = std::make_shared<CraftingTableBlock>();
  return copy;
}
