

#include "dirt_block.h"

DirtBlock::DirtBlock() = default;
DirtBlock::~DirtBlock() = default;

short DirtBlock::getId() const {
  return 10;
}

std::shared_ptr<Block> DirtBlock::clone() const {
  std::shared_ptr<DirtBlock> copy = std::make_shared<DirtBlock>();
  return copy;
}
