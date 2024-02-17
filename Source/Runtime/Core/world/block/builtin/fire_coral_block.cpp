

#include "fire_coral_block.h"

FireCoralBlock::FireCoralBlock() = default;
FireCoralBlock::~FireCoralBlock() = default;

short FireCoralBlock::getId() const {
  return 10417 + waterlogged * 1;
}

std::shared_ptr<Block> FireCoralBlock::clone() const {
  std::shared_ptr<FireCoralBlock> copy = std::make_shared<FireCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
