

#include "horn_coral_block.h"

HornCoralBlock::HornCoralBlock() = default;
HornCoralBlock::~HornCoralBlock() = default;

short HornCoralBlock::getId() const {
  return 10419 + waterlogged * 1;
}

std::shared_ptr<Block> HornCoralBlock::clone() const {
  std::shared_ptr<HornCoralBlock> copy = std::make_shared<HornCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
