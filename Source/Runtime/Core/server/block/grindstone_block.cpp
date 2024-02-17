

#include "grindstone_block.h"

GrindstoneBlock::GrindstoneBlock() = default;
GrindstoneBlock::~GrindstoneBlock() = default;

short GrindstoneBlock::getId() const {
  return 16026 + facing * 1 + face * 4;
}

std::shared_ptr<Block> GrindstoneBlock::clone() const {
  std::shared_ptr<GrindstoneBlock> copy = std::make_shared<GrindstoneBlock>();
  copy->face = face;
  copy->facing = facing;
  return copy;
}
