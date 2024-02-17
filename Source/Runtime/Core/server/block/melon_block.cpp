

#include "melon_block.h"

MelonBlock::MelonBlock() = default;
MelonBlock::~MelonBlock() = default;

short MelonBlock::getId() const {
  return 5142;
}

std::shared_ptr<Block> MelonBlock::clone() const {
  std::shared_ptr<MelonBlock> copy = std::make_shared<MelonBlock>();
  return copy;
}
