

#include "green_carpet_block.h"

GreenCarpetBlock::GreenCarpetBlock() = default;
GreenCarpetBlock::~GreenCarpetBlock() = default;

short GreenCarpetBlock::getId() const {
  return 8620;
}

std::shared_ptr<Block> GreenCarpetBlock::clone() const {
  std::shared_ptr<GreenCarpetBlock> copy = std::make_shared<GreenCarpetBlock>();
  return copy;
}
