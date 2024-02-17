

#include "potted_dandelion_block.h"

PottedDandelionBlock::PottedDandelionBlock() = default;
PottedDandelionBlock::~PottedDandelionBlock() = default;

short PottedDandelionBlock::getId() const {
  return 6906;
}

std::shared_ptr<Block> PottedDandelionBlock::clone() const {
  std::shared_ptr<PottedDandelionBlock> copy = std::make_shared<PottedDandelionBlock>();
  return copy;
}
