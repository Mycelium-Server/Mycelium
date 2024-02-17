

#include "lever_block.h"

LeverBlock::LeverBlock() = default;
LeverBlock::~LeverBlock() = default;

short LeverBlock::getId() const {
  return 4088 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> LeverBlock::clone() const {
  std::shared_ptr<LeverBlock> copy = std::make_shared<LeverBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
