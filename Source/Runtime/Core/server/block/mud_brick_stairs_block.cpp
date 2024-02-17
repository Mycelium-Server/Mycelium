

#include "mud_brick_stairs_block.h"

MudBrickStairsBlock::MudBrickStairsBlock() = default;
MudBrickStairsBlock::~MudBrickStairsBlock() = default;

short MudBrickStairsBlock::getId() const {
  return 5519 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> MudBrickStairsBlock::clone() const {
  std::shared_ptr<MudBrickStairsBlock> copy = std::make_shared<MudBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
