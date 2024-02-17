

#include "potted_crimson_roots_block.h"

PottedCrimsonRootsBlock::PottedCrimsonRootsBlock() = default;
PottedCrimsonRootsBlock::~PottedCrimsonRootsBlock() = default;

short PottedCrimsonRootsBlock::getId() const {
  return 17045;
}

std::shared_ptr<Block> PottedCrimsonRootsBlock::clone() const {
  std::shared_ptr<PottedCrimsonRootsBlock> copy = std::make_shared<PottedCrimsonRootsBlock>();
  return copy;
}
