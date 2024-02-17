

#include "small_amethyst_bud_block.h"

SmallAmethystBudBlock::SmallAmethystBudBlock() = default;
SmallAmethystBudBlock::~SmallAmethystBudBlock() = default;

short SmallAmethystBudBlock::getId() const {
  return 18657 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> SmallAmethystBudBlock::clone() const {
  std::shared_ptr<SmallAmethystBudBlock> copy = std::make_shared<SmallAmethystBudBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
