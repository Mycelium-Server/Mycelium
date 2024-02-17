

#include "jungle_sapling_block.h"

JungleSaplingBlock::JungleSaplingBlock() = default;
JungleSaplingBlock::~JungleSaplingBlock() = default;

short JungleSaplingBlock::getId() const {
  return 28 + stage * 1;
}

std::shared_ptr<Block> JungleSaplingBlock::clone() const {
  std::shared_ptr<JungleSaplingBlock> copy = std::make_shared<JungleSaplingBlock>();
  copy->stage = stage;
  return copy;
}
