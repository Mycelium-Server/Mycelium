

#include "polished_andesite_block.h"

PolishedAndesiteBlock::PolishedAndesiteBlock() = default;
PolishedAndesiteBlock::~PolishedAndesiteBlock() = default;

short PolishedAndesiteBlock::getId() const {
  return 7;
}

std::shared_ptr<Block> PolishedAndesiteBlock::clone() const {
  std::shared_ptr<PolishedAndesiteBlock> copy = std::make_shared<PolishedAndesiteBlock>();
  return copy;
}
