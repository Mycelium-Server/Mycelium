

#include "potted_fern_block.h"

PottedFernBlock::PottedFernBlock() = default;
PottedFernBlock::~PottedFernBlock() = default;

short PottedFernBlock::getId() const {
  return 6905;
}

std::shared_ptr<Block> PottedFernBlock::clone() const {
  std::shared_ptr<PottedFernBlock> copy = std::make_shared<PottedFernBlock>();
  return copy;
}
