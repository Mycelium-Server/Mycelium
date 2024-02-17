

#include "cartography_table_block.h"

CartographyTableBlock::CartographyTableBlock() = default;
CartographyTableBlock::~CartographyTableBlock() = default;

short CartographyTableBlock::getId() const {
  return 16024;
}

std::shared_ptr<Block> CartographyTableBlock::clone() const {
  std::shared_ptr<CartographyTableBlock> copy = std::make_shared<CartographyTableBlock>();
  return copy;
}
