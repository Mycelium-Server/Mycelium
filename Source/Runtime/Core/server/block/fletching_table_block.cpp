

#include "fletching_table_block.h"

FletchingTableBlock::FletchingTableBlock() = default;
FletchingTableBlock::~FletchingTableBlock() = default;

short FletchingTableBlock::getId() const {
  return 16025;
}

std::shared_ptr<Block> FletchingTableBlock::clone() const {
  std::shared_ptr<FletchingTableBlock> copy = std::make_shared<FletchingTableBlock>();
  return copy;
}
