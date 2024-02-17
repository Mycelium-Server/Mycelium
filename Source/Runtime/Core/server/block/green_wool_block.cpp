

#include "green_wool_block.h"

GreenWoolBlock::GreenWoolBlock() = default;
GreenWoolBlock::~GreenWoolBlock() = default;

short GreenWoolBlock::getId() const {
  return 1651;
}

std::shared_ptr<Block> GreenWoolBlock::clone() const {
  std::shared_ptr<GreenWoolBlock> copy = std::make_shared<GreenWoolBlock>();
  return copy;
}
