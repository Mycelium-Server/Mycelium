

#include "lantern_block.h"

LanternBlock::LanternBlock() = default;
LanternBlock::~LanternBlock() = default;

short LanternBlock::getId() const {
  return 16091 + waterlogged * 1 + hanging * 2;
}

std::shared_ptr<Block> LanternBlock::clone() const {
  std::shared_ptr<LanternBlock> copy = std::make_shared<LanternBlock>();
  copy->hanging = hanging;
  copy->waterlogged = waterlogged;
  return copy;
}
