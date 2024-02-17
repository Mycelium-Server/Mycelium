

#include "skeleton_wall_skull_block.h"

SkeletonWallSkullBlock::SkeletonWallSkullBlock() = default;
SkeletonWallSkullBlock::~SkeletonWallSkullBlock() = default;

short SkeletonWallSkullBlock::getId() const {
  return 7123 + facing * 1;
}

std::shared_ptr<Block> SkeletonWallSkullBlock::clone() const {
  std::shared_ptr<SkeletonWallSkullBlock> copy = std::make_shared<SkeletonWallSkullBlock>();
  copy->facing = facing;
  return copy;
}
