

#include "mossy_cobblestone_block.h"

MossyCobblestoneBlock::MossyCobblestoneBlock() = default;
MossyCobblestoneBlock::~MossyCobblestoneBlock() = default;

short MossyCobblestoneBlock::getId() const {
  return 1687;
}

std::shared_ptr<Block> MossyCobblestoneBlock::clone() const {
  std::shared_ptr<MossyCobblestoneBlock> copy = std::make_shared<MossyCobblestoneBlock>();
  return copy;
}
