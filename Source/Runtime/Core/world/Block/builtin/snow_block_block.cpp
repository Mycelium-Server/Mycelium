

#include "snow_block_block.h"

SnowBlockBlock::SnowBlockBlock() = default;
SnowBlockBlock::~SnowBlockBlock() = default;

short SnowBlockBlock::getId() const {
  return 4239;
}

std::shared_ptr<Block> SnowBlockBlock::clone() const {
  std::shared_ptr<SnowBlockBlock> copy = std::make_shared<SnowBlockBlock>();
  return copy;
}
