

#include "comparator_block.h"

ComparatorBlock::ComparatorBlock() = default;
ComparatorBlock::~ComparatorBlock() = default;

short ComparatorBlock::getId() const {
  return 7295 + powered * 1 + mode * 2 + facing * 4;
}

std::shared_ptr<Block> ComparatorBlock::clone() const {
  std::shared_ptr<ComparatorBlock> copy = std::make_shared<ComparatorBlock>();
  copy->facing = facing;
  copy->mode = mode;
  copy->powered = powered;
  return copy;
}
