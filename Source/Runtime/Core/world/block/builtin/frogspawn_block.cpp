

#include "frogspawn_block.h"

FrogspawnBlock::FrogspawnBlock() = default;
FrogspawnBlock::~FrogspawnBlock() = default;

short FrogspawnBlock::getId() const {
  return 21446;
}

std::shared_ptr<Block> FrogspawnBlock::clone() const {
  std::shared_ptr<FrogspawnBlock> copy = std::make_shared<FrogspawnBlock>();
  return copy;
}
