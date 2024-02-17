

#include "hanging_roots_block.h"

HangingRootsBlock::HangingRootsBlock() = default;
HangingRootsBlock::~HangingRootsBlock() = default;

short HangingRootsBlock::getId() const {
  return 19774 + waterlogged * 1;
}

std::shared_ptr<Block> HangingRootsBlock::clone() const {
  std::shared_ptr<HangingRootsBlock> copy = std::make_shared<HangingRootsBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
