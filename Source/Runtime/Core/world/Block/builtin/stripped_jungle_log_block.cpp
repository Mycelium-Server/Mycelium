

#include "stripped_jungle_log_block.h"

StrippedJungleLogBlock::StrippedJungleLogBlock() = default;
StrippedJungleLogBlock::~StrippedJungleLogBlock() = default;

short StrippedJungleLogBlock::getId() const {
  return 149 + axis * 1;
}

std::shared_ptr<Block> StrippedJungleLogBlock::clone() const {
  std::shared_ptr<StrippedJungleLogBlock> copy = std::make_shared<StrippedJungleLogBlock>();
  copy->axis = axis;
  return copy;
}
