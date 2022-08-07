#include "bone_block_block.h"

BoneBlockBlock::BoneBlockBlock() = default;
BoneBlockBlock::~BoneBlockBlock() = default;

short BoneBlockBlock::getId() const {
  if (axis == AXIS_X) return 10137;
  if (axis == AXIS_Y) return 10138;
  if (axis == AXIS_Z) return 10139;
  return 10138;
}
