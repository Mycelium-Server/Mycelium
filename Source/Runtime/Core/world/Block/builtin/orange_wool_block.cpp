

#include "orange_wool_block.h"

OrangeWoolBlock::OrangeWoolBlock() = default;
OrangeWoolBlock::~OrangeWoolBlock() = default;

short OrangeWoolBlock::getId() const {
  return 1639;
}

std::shared_ptr<Block> OrangeWoolBlock::clone() const {
  std::shared_ptr<OrangeWoolBlock> copy = std::make_shared<OrangeWoolBlock>();
  return copy;
}
