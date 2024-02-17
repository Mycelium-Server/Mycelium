

#include "purple_wool_block.h"

PurpleWoolBlock::PurpleWoolBlock() = default;
PurpleWoolBlock::~PurpleWoolBlock() = default;

short PurpleWoolBlock::getId() const {
  return 1648;
}

std::shared_ptr<Block> PurpleWoolBlock::clone() const {
  std::shared_ptr<PurpleWoolBlock> copy = std::make_shared<PurpleWoolBlock>();
  return copy;
}
