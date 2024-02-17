

#include "acacia_button_block.h"

AcaciaButtonBlock::AcaciaButtonBlock() = default;
AcaciaButtonBlock::~AcaciaButtonBlock() = default;

short AcaciaButtonBlock::getId() const {
  return 7035 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> AcaciaButtonBlock::clone() const {
  std::shared_ptr<AcaciaButtonBlock> copy = std::make_shared<AcaciaButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
