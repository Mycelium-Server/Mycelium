

#include "amethyst_cluster_block.h"

AmethystClusterBlock::AmethystClusterBlock() = default;
AmethystClusterBlock::~AmethystClusterBlock() = default;

short AmethystClusterBlock::getId() const {
  return 18621 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> AmethystClusterBlock::clone() const {
  std::shared_ptr<AmethystClusterBlock> copy = std::make_shared<AmethystClusterBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
