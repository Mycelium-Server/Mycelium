

#include "snow_block.h"

SnowBlock::SnowBlock() = default;
SnowBlock::~SnowBlock() = default;

short SnowBlock::getId() const {
  return 4230 + layers * 1;
}

std::shared_ptr<Block> SnowBlock::clone() const {
  std::shared_ptr<SnowBlock> copy = std::make_shared<SnowBlock>();
  copy->layers = layers;
  return copy;
}
