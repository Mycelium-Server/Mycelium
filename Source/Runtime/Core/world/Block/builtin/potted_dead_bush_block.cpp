

#include "potted_dead_bush_block.h"

PottedDeadBushBlock::PottedDeadBushBlock() = default;
PottedDeadBushBlock::~PottedDeadBushBlock() = default;

short PottedDeadBushBlock::getId() const {
  return 6921;
}

std::shared_ptr<Block> PottedDeadBushBlock::clone() const {
  std::shared_ptr<PottedDeadBushBlock> copy = std::make_shared<PottedDeadBushBlock>();
  return copy;
}
