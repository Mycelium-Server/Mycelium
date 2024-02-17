

#include "pink_carpet_block.h"

PinkCarpetBlock::PinkCarpetBlock() = default;
PinkCarpetBlock::~PinkCarpetBlock() = default;

short PinkCarpetBlock::getId() const {
  return 8613;
}

std::shared_ptr<Block> PinkCarpetBlock::clone() const {
  std::shared_ptr<PinkCarpetBlock> copy = std::make_shared<PinkCarpetBlock>();
  return copy;
}
