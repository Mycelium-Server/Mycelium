

#include "tall_seagrass_block.h"

TallSeagrassBlock::TallSeagrassBlock() = default;
TallSeagrassBlock::~TallSeagrassBlock() = default;

short TallSeagrassBlock::getId() const {
  return 1600 + half * 1;
}

std::shared_ptr<Block> TallSeagrassBlock::clone() const {
  std::shared_ptr<TallSeagrassBlock> copy = std::make_shared<TallSeagrassBlock>();
  copy->half = half;
  return copy;
}
