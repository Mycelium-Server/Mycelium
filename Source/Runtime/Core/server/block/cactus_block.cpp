

#include "cactus_block.h"

CactusBlock::CactusBlock() = default;
CactusBlock::~CactusBlock() = default;

short CactusBlock::getId() const {
  return 4240 + age * 1;
}

std::shared_ptr<Block> CactusBlock::clone() const {
  std::shared_ptr<CactusBlock> copy = std::make_shared<CactusBlock>();
  copy->age = age;
  return copy;
}
