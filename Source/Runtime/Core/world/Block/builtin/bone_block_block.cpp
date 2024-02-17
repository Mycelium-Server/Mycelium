

#include "bone_block_block.h"

BoneBlockBlock::BoneBlockBlock() = default;
BoneBlockBlock::~BoneBlockBlock() = default;

short BoneBlockBlock::getId() const {
  return 10137 + axis * 1;
}

std::shared_ptr<Block> BoneBlockBlock::clone() const {
  std::shared_ptr<BoneBlockBlock> copy = std::make_shared<BoneBlockBlock>();
  copy->axis = axis;
  return copy;
}
