

#include "black_stained_glass_block.h"

BlackStainedGlassBlock::BlackStainedGlassBlock() = default;
BlackStainedGlassBlock::~BlackStainedGlassBlock() = default;

short BlackStainedGlassBlock::getId() const {
  return 4419;
}

std::shared_ptr<Block> BlackStainedGlassBlock::clone() const {
  std::shared_ptr<BlackStainedGlassBlock> copy = std::make_shared<BlackStainedGlassBlock>();
  return copy;
}
