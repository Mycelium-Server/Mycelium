

#include "smithing_table_block.h"

SmithingTableBlock::SmithingTableBlock() = default;
SmithingTableBlock::~SmithingTableBlock() = default;

short SmithingTableBlock::getId() const {
  return 16054;
}

std::shared_ptr<Block> SmithingTableBlock::clone() const {
  std::shared_ptr<SmithingTableBlock> copy = std::make_shared<SmithingTableBlock>();
  return copy;
}
