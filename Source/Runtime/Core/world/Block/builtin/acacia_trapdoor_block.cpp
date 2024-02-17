

#include "acacia_trapdoor_block.h"

AcaciaTrapdoorBlock::AcaciaTrapdoorBlock() = default;
AcaciaTrapdoorBlock::~AcaciaTrapdoorBlock() = default;

short AcaciaTrapdoorBlock::getId() const {
  return 4676 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> AcaciaTrapdoorBlock::clone() const {
  std::shared_ptr<AcaciaTrapdoorBlock> copy = std::make_shared<AcaciaTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
