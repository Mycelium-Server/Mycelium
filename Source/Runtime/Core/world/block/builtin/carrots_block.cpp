

#include "carrots_block.h"

CarrotsBlock::CarrotsBlock() = default;
CarrotsBlock::~CarrotsBlock() = default;

short CarrotsBlock::getId() const {
  return 6923 + age * 1;
}

std::shared_ptr<Block> CarrotsBlock::clone() const {
  std::shared_ptr<CarrotsBlock> copy = std::make_shared<CarrotsBlock>();
  copy->age = age;
  return copy;
}
