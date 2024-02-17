

#include "ice_block.h"

IceBlock::IceBlock() = default;
IceBlock::~IceBlock() = default;

short IceBlock::getId() const {
  return 4238;
}

std::shared_ptr<Block> IceBlock::clone() const {
  std::shared_ptr<IceBlock> copy = std::make_shared<IceBlock>();
  return copy;
}
