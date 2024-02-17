

#include "potted_allium_block.h"

PottedAlliumBlock::PottedAlliumBlock() = default;
PottedAlliumBlock::~PottedAlliumBlock() = default;

short PottedAlliumBlock::getId() const {
  return 6909;
}

std::shared_ptr<Block> PottedAlliumBlock::clone() const {
  std::shared_ptr<PottedAlliumBlock> copy = std::make_shared<PottedAlliumBlock>();
  return copy;
}
