

#include "mangrove_roots_block.h"

MangroveRootsBlock::MangroveRootsBlock() = default;
MangroveRootsBlock::~MangroveRootsBlock() = default;

short MangroveRootsBlock::getId() const {
  return 138 + waterlogged * 1;
}

std::shared_ptr<Block> MangroveRootsBlock::clone() const {
  std::shared_ptr<MangroveRootsBlock> copy = std::make_shared<MangroveRootsBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
