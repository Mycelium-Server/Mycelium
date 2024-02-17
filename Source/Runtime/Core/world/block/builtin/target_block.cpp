

#include "target_block.h"

TargetBlock::TargetBlock() = default;
TargetBlock::~TargetBlock() = default;

short TargetBlock::getId() const {
  return 16969 + power * 1;
}

std::shared_ptr<Block> TargetBlock::clone() const {
  std::shared_ptr<TargetBlock> copy = std::make_shared<TargetBlock>();
  copy->power = power;
  return copy;
}
