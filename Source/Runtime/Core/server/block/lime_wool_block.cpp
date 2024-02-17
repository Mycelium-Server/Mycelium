

#include "lime_wool_block.h"

LimeWoolBlock::LimeWoolBlock() = default;
LimeWoolBlock::~LimeWoolBlock() = default;

short LimeWoolBlock::getId() const {
  return 1643;
}

std::shared_ptr<Block> LimeWoolBlock::clone() const {
  std::shared_ptr<LimeWoolBlock> copy = std::make_shared<LimeWoolBlock>();
  return copy;
}
