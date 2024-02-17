

#include "crimson_button_block.h"

CrimsonButtonBlock::CrimsonButtonBlock() = default;
CrimsonButtonBlock::~CrimsonButtonBlock() = default;

short CrimsonButtonBlock::getId() const {
  return 16688 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> CrimsonButtonBlock::clone() const {
  std::shared_ptr<CrimsonButtonBlock> copy = std::make_shared<CrimsonButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
