

#include "tube_coral_block_block.h"

TubeCoralBlockBlock::TubeCoralBlockBlock() = default;
TubeCoralBlockBlock::~TubeCoralBlockBlock() = default;

short TubeCoralBlockBlock::getId() const {
  return 10396;
}

std::shared_ptr<Block> TubeCoralBlockBlock::clone() const {
  std::shared_ptr<TubeCoralBlockBlock> copy = std::make_shared<TubeCoralBlockBlock>();
  return copy;
}
