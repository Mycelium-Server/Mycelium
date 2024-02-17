

#include "lava_cauldron_block.h"

LavaCauldronBlock::LavaCauldronBlock() = default;
LavaCauldronBlock::~LavaCauldronBlock() = default;

short LavaCauldronBlock::getId() const {
  return 5732;
}

std::shared_ptr<Block> LavaCauldronBlock::clone() const {
  std::shared_ptr<LavaCauldronBlock> copy = std::make_shared<LavaCauldronBlock>();
  return copy;
}
