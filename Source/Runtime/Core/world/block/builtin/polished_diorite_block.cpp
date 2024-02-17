

#include "polished_diorite_block.h"

PolishedDioriteBlock::PolishedDioriteBlock() = default;
PolishedDioriteBlock::~PolishedDioriteBlock() = default;

short PolishedDioriteBlock::getId() const {
  return 5;
}

std::shared_ptr<Block> PolishedDioriteBlock::clone() const {
  std::shared_ptr<PolishedDioriteBlock> copy = std::make_shared<PolishedDioriteBlock>();
  return copy;
}
