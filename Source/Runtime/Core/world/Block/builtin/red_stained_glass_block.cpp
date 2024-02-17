

#include "red_stained_glass_block.h"

RedStainedGlassBlock::RedStainedGlassBlock() = default;
RedStainedGlassBlock::~RedStainedGlassBlock() = default;

short RedStainedGlassBlock::getId() const {
  return 4418;
}

std::shared_ptr<Block> RedStainedGlassBlock::clone() const {
  std::shared_ptr<RedStainedGlassBlock> copy = std::make_shared<RedStainedGlassBlock>();
  return copy;
}
