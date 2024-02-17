

#include "stonecutter_block.h"

StonecutterBlock::StonecutterBlock() = default;
StonecutterBlock::~StonecutterBlock() = default;

short StonecutterBlock::getId() const {
  return 16055 + facing * 1;
}

std::shared_ptr<Block> StonecutterBlock::clone() const {
  std::shared_ptr<StonecutterBlock> copy = std::make_shared<StonecutterBlock>();
  copy->facing = facing;
  return copy;
}
