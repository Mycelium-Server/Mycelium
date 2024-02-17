

#include "black_wool_block.h"

BlackWoolBlock::BlackWoolBlock() = default;
BlackWoolBlock::~BlackWoolBlock() = default;

short BlackWoolBlock::getId() const {
  return 1653;
}

std::shared_ptr<Block> BlackWoolBlock::clone() const {
  std::shared_ptr<BlackWoolBlock> copy = std::make_shared<BlackWoolBlock>();
  return copy;
}
