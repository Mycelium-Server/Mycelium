

#include "wither_skeleton_wall_skull_block.h"

WitherSkeletonWallSkullBlock::WitherSkeletonWallSkullBlock() = default;
WitherSkeletonWallSkullBlock::~WitherSkeletonWallSkullBlock() = default;

short WitherSkeletonWallSkullBlock::getId() const {
  return 7143 + facing * 1;
}

std::shared_ptr<Block> WitherSkeletonWallSkullBlock::clone() const {
  std::shared_ptr<WitherSkeletonWallSkullBlock> copy = std::make_shared<WitherSkeletonWallSkullBlock>();
  copy->facing = facing;
  return copy;
}
