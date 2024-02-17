

#include "dandelion_block.h"

DandelionBlock::DandelionBlock() = default;
DandelionBlock::~DandelionBlock() = default;

short DandelionBlock::getId() const {
  return 1666;
}

std::shared_ptr<Block> DandelionBlock::clone() const {
  std::shared_ptr<DandelionBlock> copy = std::make_shared<DandelionBlock>();
  return copy;
}
