

#include "large_amethyst_bud_block.h"

LargeAmethystBudBlock::LargeAmethystBudBlock() = default;
LargeAmethystBudBlock::~LargeAmethystBudBlock() = default;

short LargeAmethystBudBlock::getId() const {
  return 18633 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> LargeAmethystBudBlock::clone() const {
  std::shared_ptr<LargeAmethystBudBlock> copy = std::make_shared<LargeAmethystBudBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
