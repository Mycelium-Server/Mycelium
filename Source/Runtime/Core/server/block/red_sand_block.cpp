

#include "red_sand_block.h"

RedSandBlock::RedSandBlock() = default;
RedSandBlock::~RedSandBlock() = default;

short RedSandBlock::getId() const {
  return 108;
}

std::shared_ptr<Block> RedSandBlock::clone() const {
  std::shared_ptr<RedSandBlock> copy = std::make_shared<RedSandBlock>();
  return copy;
}
