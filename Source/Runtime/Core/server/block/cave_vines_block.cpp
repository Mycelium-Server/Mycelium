

#include "cave_vines_block.h"

CaveVinesBlock::CaveVinesBlock() = default;
CaveVinesBlock::~CaveVinesBlock() = default;

short CaveVinesBlock::getId() const {
  return 19659 + berries * 1 + age * 2;
}

std::shared_ptr<Block> CaveVinesBlock::clone() const {
  std::shared_ptr<CaveVinesBlock> copy = std::make_shared<CaveVinesBlock>();
  copy->age = age;
  copy->berries = berries;
  return copy;
}
