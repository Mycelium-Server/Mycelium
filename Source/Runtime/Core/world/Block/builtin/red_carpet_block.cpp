

#include "red_carpet_block.h"

RedCarpetBlock::RedCarpetBlock() = default;
RedCarpetBlock::~RedCarpetBlock() = default;

short RedCarpetBlock::getId() const {
  return 8621;
}

std::shared_ptr<Block> RedCarpetBlock::clone() const {
  std::shared_ptr<RedCarpetBlock> copy = std::make_shared<RedCarpetBlock>();
  return copy;
}
