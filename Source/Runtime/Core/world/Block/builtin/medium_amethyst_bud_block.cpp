

#include "medium_amethyst_bud_block.h"

MediumAmethystBudBlock::MediumAmethystBudBlock() = default;
MediumAmethystBudBlock::~MediumAmethystBudBlock() = default;

short MediumAmethystBudBlock::getId() const {
  return 18645 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> MediumAmethystBudBlock::clone() const {
  std::shared_ptr<MediumAmethystBudBlock> copy = std::make_shared<MediumAmethystBudBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
