

#include "gray_carpet_block.h"

GrayCarpetBlock::GrayCarpetBlock() = default;
GrayCarpetBlock::~GrayCarpetBlock() = default;

short GrayCarpetBlock::getId() const {
  return 8614;
}

std::shared_ptr<Block> GrayCarpetBlock::clone() const {
  std::shared_ptr<GrayCarpetBlock> copy = std::make_shared<GrayCarpetBlock>();
  return copy;
}
