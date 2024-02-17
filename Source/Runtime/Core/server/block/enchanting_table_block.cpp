

#include "enchanting_table_block.h"

EnchantingTableBlock::EnchantingTableBlock() = default;
EnchantingTableBlock::~EnchantingTableBlock() = default;

short EnchantingTableBlock::getId() const {
  return 5719;
}

std::shared_ptr<Block> EnchantingTableBlock::clone() const {
  std::shared_ptr<EnchantingTableBlock> copy = std::make_shared<EnchantingTableBlock>();
  return copy;
}
