

#include "jungle_sign_block.h"

JungleSignBlock::JungleSignBlock() = default;
JungleSignBlock::~JungleSignBlock() = default;

short JungleSignBlock::getId() const {
  return 3764 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> JungleSignBlock::clone() const {
  std::shared_ptr<JungleSignBlock> copy = std::make_shared<JungleSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
