

#include "quartz_bricks_block.h"

QuartzBricksBlock::QuartzBricksBlock() = default;
QuartzBricksBlock::~QuartzBricksBlock() = default;

short QuartzBricksBlock::getId() const {
  return 18312;
}

std::shared_ptr<Block> QuartzBricksBlock::clone() const {
  std::shared_ptr<QuartzBricksBlock> copy = std::make_shared<QuartzBricksBlock>();
  return copy;
}
