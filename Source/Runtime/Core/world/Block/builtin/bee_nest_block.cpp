

#include "bee_nest_block.h"

BeeNestBlock::BeeNestBlock() = default;
BeeNestBlock::~BeeNestBlock() = default;

short BeeNestBlock::getId() const {
  return 16985 + honey_level * 1 + facing * 6;
}

std::shared_ptr<Block> BeeNestBlock::clone() const {
  std::shared_ptr<BeeNestBlock> copy = std::make_shared<BeeNestBlock>();
  copy->facing = facing;
  copy->honey_level = honey_level;
  return copy;
}
