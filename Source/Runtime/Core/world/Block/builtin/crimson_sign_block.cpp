

#include "crimson_sign_block.h"

CrimsonSignBlock::CrimsonSignBlock() = default;
CrimsonSignBlock::~CrimsonSignBlock() = default;

short CrimsonSignBlock::getId() const {
  return 16864 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> CrimsonSignBlock::clone() const {
  std::shared_ptr<CrimsonSignBlock> copy = std::make_shared<CrimsonSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
