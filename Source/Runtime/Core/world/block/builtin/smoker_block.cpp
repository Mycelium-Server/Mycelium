

#include "smoker_block.h"

SmokerBlock::SmokerBlock() = default;
SmokerBlock::~SmokerBlock() = default;

short SmokerBlock::getId() const {
  return 16008 + lit * 1 + facing * 2;
}

std::shared_ptr<Block> SmokerBlock::clone() const {
  std::shared_ptr<SmokerBlock> copy = std::make_shared<SmokerBlock>();
  copy->facing = facing;
  copy->lit = lit;
  return copy;
}
