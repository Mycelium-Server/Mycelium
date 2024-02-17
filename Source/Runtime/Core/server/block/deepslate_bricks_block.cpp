

#include "deepslate_bricks_block.h"

DeepslateBricksBlock::DeepslateBricksBlock() = default;
DeepslateBricksBlock::~DeepslateBricksBlock() = default;

short DeepslateBricksBlock::getId() const {
  return 21014;
}

std::shared_ptr<Block> DeepslateBricksBlock::clone() const {
  std::shared_ptr<DeepslateBricksBlock> copy = std::make_shared<DeepslateBricksBlock>();
  return copy;
}
