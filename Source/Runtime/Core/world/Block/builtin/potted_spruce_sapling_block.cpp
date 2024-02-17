

#include "potted_spruce_sapling_block.h"

PottedSpruceSaplingBlock::PottedSpruceSaplingBlock() = default;
PottedSpruceSaplingBlock::~PottedSpruceSaplingBlock() = default;

short PottedSpruceSaplingBlock::getId() const {
  return 6899;
}

std::shared_ptr<Block> PottedSpruceSaplingBlock::clone() const {
  std::shared_ptr<PottedSpruceSaplingBlock> copy = std::make_shared<PottedSpruceSaplingBlock>();
  return copy;
}
