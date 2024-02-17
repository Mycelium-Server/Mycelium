

#include "ender_chest_block.h"

EnderChestBlock::EnderChestBlock() = default;
EnderChestBlock::~EnderChestBlock() = default;

short EnderChestBlock::getId() const {
  return 5843 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> EnderChestBlock::clone() const {
  std::shared_ptr<EnderChestBlock> copy = std::make_shared<EnderChestBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
