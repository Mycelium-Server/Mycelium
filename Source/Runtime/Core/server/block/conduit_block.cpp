

#include "conduit_block.h"

ConduitBlock::ConduitBlock() = default;
ConduitBlock::~ConduitBlock() = default;

short ConduitBlock::getId() const {
  return 10530 + waterlogged * 1;
}

std::shared_ptr<Block> ConduitBlock::clone() const {
  std::shared_ptr<ConduitBlock> copy = std::make_shared<ConduitBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
