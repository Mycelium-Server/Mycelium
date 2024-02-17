

#include "blue_carpet_block.h"

BlueCarpetBlock::BlueCarpetBlock() = default;
BlueCarpetBlock::~BlueCarpetBlock() = default;

short BlueCarpetBlock::getId() const {
  return 8618;
}

std::shared_ptr<Block> BlueCarpetBlock::clone() const {
  std::shared_ptr<BlueCarpetBlock> copy = std::make_shared<BlueCarpetBlock>();
  return copy;
}
