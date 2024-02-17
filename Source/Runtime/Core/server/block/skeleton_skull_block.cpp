

#include "skeleton_skull_block.h"

SkeletonSkullBlock::SkeletonSkullBlock() = default;
SkeletonSkullBlock::~SkeletonSkullBlock() = default;

short SkeletonSkullBlock::getId() const {
  return 7107 + rotation * 1;
}

std::shared_ptr<Block> SkeletonSkullBlock::clone() const {
  std::shared_ptr<SkeletonSkullBlock> copy = std::make_shared<SkeletonSkullBlock>();
  copy->rotation = rotation;
  return copy;
}
