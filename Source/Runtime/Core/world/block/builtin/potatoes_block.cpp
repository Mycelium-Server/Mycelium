

#include "potatoes_block.h"

PotatoesBlock::PotatoesBlock() = default;
PotatoesBlock::~PotatoesBlock() = default;

short PotatoesBlock::getId() const {
  return 6931 + age * 1;
}

std::shared_ptr<Block> PotatoesBlock::clone() const {
  std::shared_ptr<PotatoesBlock> copy = std::make_shared<PotatoesBlock>();
  copy->age = age;
  return copy;
}
