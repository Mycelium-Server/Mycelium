

#include "light_block.h"

LightBlock::LightBlock() = default;
LightBlock::~LightBlock() = default;

short LightBlock::getId() const {
  return 8246 + waterlogged * 1 + level * 2;
}

std::shared_ptr<Block> LightBlock::clone() const {
  std::shared_ptr<LightBlock> copy = std::make_shared<LightBlock>();
  copy->level = level;
  copy->waterlogged = waterlogged;
  return copy;
}
