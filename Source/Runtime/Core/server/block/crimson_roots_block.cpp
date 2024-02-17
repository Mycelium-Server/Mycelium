

#include "crimson_roots_block.h"

CrimsonRootsBlock::CrimsonRootsBlock() = default;
CrimsonRootsBlock::~CrimsonRootsBlock() = default;

short CrimsonRootsBlock::getId() const {
  return 16253;
}

std::shared_ptr<Block> CrimsonRootsBlock::clone() const {
  std::shared_ptr<CrimsonRootsBlock> copy = std::make_shared<CrimsonRootsBlock>();
  return copy;
}
