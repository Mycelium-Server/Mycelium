

#include "polished_granite_block.h"

PolishedGraniteBlock::PolishedGraniteBlock() = default;
PolishedGraniteBlock::~PolishedGraniteBlock() = default;

short PolishedGraniteBlock::getId() const {
  return 3;
}

std::shared_ptr<Block> PolishedGraniteBlock::clone() const {
  std::shared_ptr<PolishedGraniteBlock> copy = std::make_shared<PolishedGraniteBlock>();
  return copy;
}
