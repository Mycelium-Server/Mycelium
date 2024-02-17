

#include "white_wool_block.h"

WhiteWoolBlock::WhiteWoolBlock() = default;
WhiteWoolBlock::~WhiteWoolBlock() = default;

short WhiteWoolBlock::getId() const {
  return 1638;
}

std::shared_ptr<Block> WhiteWoolBlock::clone() const {
  std::shared_ptr<WhiteWoolBlock> copy = std::make_shared<WhiteWoolBlock>();
  return copy;
}
