

#include "turtle_egg_block.h"

TurtleEggBlock::TurtleEggBlock() = default;
TurtleEggBlock::~TurtleEggBlock() = default;

short TurtleEggBlock::getId() const {
  return 10379 + hatch * 1 + eggs * 3;
}

std::shared_ptr<Block> TurtleEggBlock::clone() const {
  std::shared_ptr<TurtleEggBlock> copy = std::make_shared<TurtleEggBlock>();
  copy->eggs = eggs;
  copy->hatch = hatch;
  return copy;
}
