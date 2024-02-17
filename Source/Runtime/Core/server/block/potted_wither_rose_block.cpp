

#include "potted_wither_rose_block.h"

PottedWitherRoseBlock::PottedWitherRoseBlock() = default;
PottedWitherRoseBlock::~PottedWitherRoseBlock() = default;

short PottedWitherRoseBlock::getId() const {
  return 6918;
}

std::shared_ptr<Block> PottedWitherRoseBlock::clone() const {
  std::shared_ptr<PottedWitherRoseBlock> copy = std::make_shared<PottedWitherRoseBlock>();
  return copy;
}
