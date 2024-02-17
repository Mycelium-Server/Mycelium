

#include "chest_block.h"

ChestBlock::ChestBlock() = default;
ChestBlock::~ChestBlock() = default;

short ChestBlock::getId() const {
  return 2288 + waterlogged * 1 + type * 2 + facing * 6;
}

std::shared_ptr<Block> ChestBlock::clone() const {
  std::shared_ptr<ChestBlock> copy = std::make_shared<ChestBlock>();
  copy->type = type;
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
