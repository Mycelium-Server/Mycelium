

#include "dead_tube_coral_block_block.h"

DeadTubeCoralBlockBlock::DeadTubeCoralBlockBlock() = default;
DeadTubeCoralBlockBlock::~DeadTubeCoralBlockBlock() = default;

short DeadTubeCoralBlockBlock::getId() const {
  return 10391;
}

std::shared_ptr<Block> DeadTubeCoralBlockBlock::clone() const {
  std::shared_ptr<DeadTubeCoralBlockBlock> copy = std::make_shared<DeadTubeCoralBlockBlock>();
  return copy;
}
