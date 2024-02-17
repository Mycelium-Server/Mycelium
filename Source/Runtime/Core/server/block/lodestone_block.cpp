

#include "lodestone_block.h"

LodestoneBlock::LodestoneBlock() = default;
LodestoneBlock::~LodestoneBlock() = default;

short LodestoneBlock::getId() const {
  return 17047;
}

std::shared_ptr<Block> LodestoneBlock::clone() const {
  std::shared_ptr<LodestoneBlock> copy = std::make_shared<LodestoneBlock>();
  return copy;
}
