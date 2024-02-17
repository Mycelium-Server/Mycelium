

#include "lightning_rod_block.h"

LightningRodBlock::LightningRodBlock() = default;
LightningRodBlock::~LightningRodBlock() = default;

short LightningRodBlock::getId() const {
  return 19614 + waterlogged * 1 + powered * 2 + facing * 4;
}

std::shared_ptr<Block> LightningRodBlock::clone() const {
  std::shared_ptr<LightningRodBlock> copy = std::make_shared<LightningRodBlock>();
  copy->facing = facing;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
