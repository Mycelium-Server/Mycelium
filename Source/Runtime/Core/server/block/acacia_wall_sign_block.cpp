

#include "acacia_wall_sign_block.h"

AcaciaWallSignBlock::AcaciaWallSignBlock() = default;
AcaciaWallSignBlock::~AcaciaWallSignBlock() = default;

short AcaciaWallSignBlock::getId() const {
  return 4056 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> AcaciaWallSignBlock::clone() const {
  std::shared_ptr<AcaciaWallSignBlock> copy = std::make_shared<AcaciaWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
