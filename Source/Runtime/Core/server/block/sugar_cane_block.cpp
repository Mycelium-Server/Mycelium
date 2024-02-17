

#include "sugar_cane_block.h"

SugarCaneBlock::SugarCaneBlock() = default;
SugarCaneBlock::~SugarCaneBlock() = default;

short SugarCaneBlock::getId() const {
  return 4257 + age * 1;
}

std::shared_ptr<Block> SugarCaneBlock::clone() const {
  std::shared_ptr<SugarCaneBlock> copy = std::make_shared<SugarCaneBlock>();
  copy->age = age;
  return copy;
}
