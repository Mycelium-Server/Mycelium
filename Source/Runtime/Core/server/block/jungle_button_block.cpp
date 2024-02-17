

#include "jungle_button_block.h"

JungleButtonBlock::JungleButtonBlock() = default;
JungleButtonBlock::~JungleButtonBlock() = default;

short JungleButtonBlock::getId() const {
  return 7011 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> JungleButtonBlock::clone() const {
  std::shared_ptr<JungleButtonBlock> copy = std::make_shared<JungleButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
