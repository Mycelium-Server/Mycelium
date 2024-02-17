

#include "acacia_sign_block.h"

AcaciaSignBlock::AcaciaSignBlock() = default;
AcaciaSignBlock::~AcaciaSignBlock() = default;

short AcaciaSignBlock::getId() const {
  return 3732 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> AcaciaSignBlock::clone() const {
  std::shared_ptr<AcaciaSignBlock> copy = std::make_shared<AcaciaSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
