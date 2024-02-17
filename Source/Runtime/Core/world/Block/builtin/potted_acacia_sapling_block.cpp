

#include "potted_acacia_sapling_block.h"

PottedAcaciaSaplingBlock::PottedAcaciaSaplingBlock() = default;
PottedAcaciaSaplingBlock::~PottedAcaciaSaplingBlock() = default;

short PottedAcaciaSaplingBlock::getId() const {
  return 6902;
}

std::shared_ptr<Block> PottedAcaciaSaplingBlock::clone() const {
  std::shared_ptr<PottedAcaciaSaplingBlock> copy = std::make_shared<PottedAcaciaSaplingBlock>();
  return copy;
}
