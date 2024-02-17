

#include "end_stone_bricks_block.h"

EndStoneBricksBlock::EndStoneBricksBlock() = default;
EndStoneBricksBlock::~EndStoneBricksBlock() = default;

short EndStoneBricksBlock::getId() const {
  return 10099;
}

std::shared_ptr<Block> EndStoneBricksBlock::clone() const {
  std::shared_ptr<EndStoneBricksBlock> copy = std::make_shared<EndStoneBricksBlock>();
  return copy;
}
