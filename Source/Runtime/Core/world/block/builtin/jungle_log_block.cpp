

#include "jungle_log_block.h"

JungleLogBlock::JungleLogBlock() = default;
JungleLogBlock::~JungleLogBlock() = default;

short JungleLogBlock::getId() const {
  return 126 + axis * 1;
}

std::shared_ptr<Block> JungleLogBlock::clone() const {
  std::shared_ptr<JungleLogBlock> copy = std::make_shared<JungleLogBlock>();
  copy->axis = axis;
  return copy;
}
