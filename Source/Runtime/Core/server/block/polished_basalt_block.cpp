

#include "polished_basalt_block.h"

PolishedBasaltBlock::PolishedBasaltBlock() = default;
PolishedBasaltBlock::~PolishedBasaltBlock() = default;

short PolishedBasaltBlock::getId() const {
  return 4314 + axis * 1;
}

std::shared_ptr<Block> PolishedBasaltBlock::clone() const {
  std::shared_ptr<PolishedBasaltBlock> copy = std::make_shared<PolishedBasaltBlock>();
  copy->axis = axis;
  return copy;
}
