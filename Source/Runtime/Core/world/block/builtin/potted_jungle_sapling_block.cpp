

#include "potted_jungle_sapling_block.h"

PottedJungleSaplingBlock::PottedJungleSaplingBlock() = default;
PottedJungleSaplingBlock::~PottedJungleSaplingBlock() = default;

short PottedJungleSaplingBlock::getId() const {
  return 6901;
}

std::shared_ptr<Block> PottedJungleSaplingBlock::clone() const {
  std::shared_ptr<PottedJungleSaplingBlock> copy = std::make_shared<PottedJungleSaplingBlock>();
  return copy;
}
