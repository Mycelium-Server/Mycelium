

#include "cake_block.h"

CakeBlock::CakeBlock() = default;
CakeBlock::~CakeBlock() = default;

short CakeBlock::getId() const {
  return 4333 + bites * 1;
}

std::shared_ptr<Block> CakeBlock::clone() const {
  std::shared_ptr<CakeBlock> copy = std::make_shared<CakeBlock>();
  copy->bites = bites;
  return copy;
}
