

#include "pink_tulip_block.h"

PinkTulipBlock::PinkTulipBlock() = default;
PinkTulipBlock::~PinkTulipBlock() = default;

short PinkTulipBlock::getId() const {
  return 1674;
}

std::shared_ptr<Block> PinkTulipBlock::clone() const {
  std::shared_ptr<PinkTulipBlock> copy = std::make_shared<PinkTulipBlock>();
  return copy;
}
