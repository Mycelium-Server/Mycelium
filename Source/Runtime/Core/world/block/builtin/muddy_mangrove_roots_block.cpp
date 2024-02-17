

#include "muddy_mangrove_roots_block.h"

MuddyMangroveRootsBlock::MuddyMangroveRootsBlock() = default;
MuddyMangroveRootsBlock::~MuddyMangroveRootsBlock() = default;

short MuddyMangroveRootsBlock::getId() const {
  return 140 + axis * 1;
}

std::shared_ptr<Block> MuddyMangroveRootsBlock::clone() const {
  std::shared_ptr<MuddyMangroveRootsBlock> copy = std::make_shared<MuddyMangroveRootsBlock>();
  copy->axis = axis;
  return copy;
}
