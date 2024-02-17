

#include "polished_blackstone_brick_stairs_block.h"

PolishedBlackstoneBrickStairsBlock::PolishedBlackstoneBrickStairsBlock() = default;
PolishedBlackstoneBrickStairsBlock::~PolishedBlackstoneBrickStairsBlock() = default;

short PolishedBlackstoneBrickStairsBlock::getId() const {
  return 17469 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PolishedBlackstoneBrickStairsBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneBrickStairsBlock> copy = std::make_shared<PolishedBlackstoneBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
