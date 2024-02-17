

#include "soul_lantern_block.h"

SoulLanternBlock::SoulLanternBlock() = default;
SoulLanternBlock::~SoulLanternBlock() = default;

short SoulLanternBlock::getId() const {
  return 16095 + waterlogged * 1 + hanging * 2;
}

std::shared_ptr<Block> SoulLanternBlock::clone() const {
  std::shared_ptr<SoulLanternBlock> copy = std::make_shared<SoulLanternBlock>();
  copy->hanging = hanging;
  copy->waterlogged = waterlogged;
  return copy;
}
