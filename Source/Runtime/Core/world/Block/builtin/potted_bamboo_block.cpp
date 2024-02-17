

#include "potted_bamboo_block.h"

PottedBambooBlock::PottedBambooBlock() = default;
PottedBambooBlock::~PottedBambooBlock() = default;

short PottedBambooBlock::getId() const {
  return 10545;
}

std::shared_ptr<Block> PottedBambooBlock::clone() const {
  std::shared_ptr<PottedBambooBlock> copy = std::make_shared<PottedBambooBlock>();
  return copy;
}
