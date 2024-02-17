

#include "chipped_anvil_block.h"

ChippedAnvilBlock::ChippedAnvilBlock() = default;
ChippedAnvilBlock::~ChippedAnvilBlock() = default;

short ChippedAnvilBlock::getId() const {
  return 7231 + facing * 1;
}

std::shared_ptr<Block> ChippedAnvilBlock::clone() const {
  std::shared_ptr<ChippedAnvilBlock> copy = std::make_shared<ChippedAnvilBlock>();
  copy->facing = facing;
  return copy;
}
