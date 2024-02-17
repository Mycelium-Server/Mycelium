

#include "dirt_path_block.h"

DirtPathBlock::DirtPathBlock() = default;
DirtPathBlock::~DirtPathBlock() = default;

short DirtPathBlock::getId() const {
  return 10104;
}

std::shared_ptr<Block> DirtPathBlock::clone() const {
  std::shared_ptr<DirtPathBlock> copy = std::make_shared<DirtPathBlock>();
  return copy;
}
