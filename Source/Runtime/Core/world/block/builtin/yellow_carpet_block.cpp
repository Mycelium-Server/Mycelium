

#include "yellow_carpet_block.h"

YellowCarpetBlock::YellowCarpetBlock() = default;
YellowCarpetBlock::~YellowCarpetBlock() = default;

short YellowCarpetBlock::getId() const {
  return 8611;
}

std::shared_ptr<Block> YellowCarpetBlock::clone() const {
  std::shared_ptr<YellowCarpetBlock> copy = std::make_shared<YellowCarpetBlock>();
  return copy;
}
