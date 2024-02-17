

#include "tall_grass_block.h"

TallGrassBlock::TallGrassBlock() = default;
TallGrassBlock::~TallGrassBlock() = default;

short TallGrassBlock::getId() const {
  return 8634 + half * 1;
}

std::shared_ptr<Block> TallGrassBlock::clone() const {
  std::shared_ptr<TallGrassBlock> copy = std::make_shared<TallGrassBlock>();
  copy->half = half;
  return copy;
}
