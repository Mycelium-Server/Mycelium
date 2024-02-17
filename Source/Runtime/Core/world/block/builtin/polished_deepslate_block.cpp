

#include "polished_deepslate_block.h"

PolishedDeepslateBlock::PolishedDeepslateBlock() = default;
PolishedDeepslateBlock::~PolishedDeepslateBlock() = default;

short PolishedDeepslateBlock::getId() const {
  return 20192;
}

std::shared_ptr<Block> PolishedDeepslateBlock::clone() const {
  std::shared_ptr<PolishedDeepslateBlock> copy = std::make_shared<PolishedDeepslateBlock>();
  return copy;
}
