

#include "trapped_chest_block.h"

TrappedChestBlock::TrappedChestBlock() = default;
TrappedChestBlock::~TrappedChestBlock() = default;

short TrappedChestBlock::getId() const {
  return 7239 + waterlogged * 1 + type * 2 + facing * 6;
}

std::shared_ptr<Block> TrappedChestBlock::clone() const {
  std::shared_ptr<TrappedChestBlock> copy = std::make_shared<TrappedChestBlock>();
  copy->type = type;
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
