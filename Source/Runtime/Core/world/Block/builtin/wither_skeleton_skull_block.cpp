

#include "wither_skeleton_skull_block.h"

WitherSkeletonSkullBlock::WitherSkeletonSkullBlock() = default;
WitherSkeletonSkullBlock::~WitherSkeletonSkullBlock() = default;

short WitherSkeletonSkullBlock::getId() const {
  return 7127 + rotation * 1;
}

std::shared_ptr<Block> WitherSkeletonSkullBlock::clone() const {
  std::shared_ptr<WitherSkeletonSkullBlock> copy = std::make_shared<WitherSkeletonSkullBlock>();
  copy->rotation = rotation;
  return copy;
}
