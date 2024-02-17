

#include "cyan_wool_block.h"

CyanWoolBlock::CyanWoolBlock() = default;
CyanWoolBlock::~CyanWoolBlock() = default;

short CyanWoolBlock::getId() const {
  return 1647;
}

std::shared_ptr<Block> CyanWoolBlock::clone() const {
  std::shared_ptr<CyanWoolBlock> copy = std::make_shared<CyanWoolBlock>();
  return copy;
}
