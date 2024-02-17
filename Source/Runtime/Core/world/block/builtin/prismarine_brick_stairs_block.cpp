

#include "prismarine_brick_stairs_block.h"

PrismarineBrickStairsBlock::PrismarineBrickStairsBlock() = default;
PrismarineBrickStairsBlock::~PrismarineBrickStairsBlock() = default;

short PrismarineBrickStairsBlock::getId() const {
  return 8425 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PrismarineBrickStairsBlock::clone() const {
  std::shared_ptr<PrismarineBrickStairsBlock> copy = std::make_shared<PrismarineBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
