

#include "potted_birch_sapling_block.h"

PottedBirchSaplingBlock::PottedBirchSaplingBlock() = default;
PottedBirchSaplingBlock::~PottedBirchSaplingBlock() = default;

short PottedBirchSaplingBlock::getId() const {
  return 6900;
}

std::shared_ptr<Block> PottedBirchSaplingBlock::clone() const {
  std::shared_ptr<PottedBirchSaplingBlock> copy = std::make_shared<PottedBirchSaplingBlock>();
  return copy;
}
