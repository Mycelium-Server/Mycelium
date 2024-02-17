

#include "black_carpet_block.h"

BlackCarpetBlock::BlackCarpetBlock() = default;
BlackCarpetBlock::~BlackCarpetBlock() = default;

short BlackCarpetBlock::getId() const {
  return 8622;
}

std::shared_ptr<Block> BlackCarpetBlock::clone() const {
  std::shared_ptr<BlackCarpetBlock> copy = std::make_shared<BlackCarpetBlock>();
  return copy;
}
