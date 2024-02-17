

#include "yellow_wool_block.h"

YellowWoolBlock::YellowWoolBlock() = default;
YellowWoolBlock::~YellowWoolBlock() = default;

short YellowWoolBlock::getId() const {
  return 1642;
}

std::shared_ptr<Block> YellowWoolBlock::clone() const {
  std::shared_ptr<YellowWoolBlock> copy = std::make_shared<YellowWoolBlock>();
  return copy;
}
