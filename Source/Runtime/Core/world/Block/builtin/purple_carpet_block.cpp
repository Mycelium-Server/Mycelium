

#include "purple_carpet_block.h"

PurpleCarpetBlock::PurpleCarpetBlock() = default;
PurpleCarpetBlock::~PurpleCarpetBlock() = default;

short PurpleCarpetBlock::getId() const {
  return 8617;
}

std::shared_ptr<Block> PurpleCarpetBlock::clone() const {
  std::shared_ptr<PurpleCarpetBlock> copy = std::make_shared<PurpleCarpetBlock>();
  return copy;
}
