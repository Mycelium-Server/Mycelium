

#include "potted_cactus_block.h"

PottedCactusBlock::PottedCactusBlock() = default;
PottedCactusBlock::~PottedCactusBlock() = default;

short PottedCactusBlock::getId() const {
  return 6922;
}

std::shared_ptr<Block> PottedCactusBlock::clone() const {
  std::shared_ptr<PottedCactusBlock> copy = std::make_shared<PottedCactusBlock>();
  return copy;
}
