

#include "wheat_block.h"

WheatBlock::WheatBlock() = default;
WheatBlock::~WheatBlock() = default;

short WheatBlock::getId() const {
  return 3612 + age * 1;
}

std::shared_ptr<Block> WheatBlock::clone() const {
  std::shared_ptr<WheatBlock> copy = std::make_shared<WheatBlock>();
  copy->age = age;
  return copy;
}
