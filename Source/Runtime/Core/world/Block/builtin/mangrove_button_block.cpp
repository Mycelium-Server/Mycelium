

#include "mangrove_button_block.h"

MangroveButtonBlock::MangroveButtonBlock() = default;
MangroveButtonBlock::~MangroveButtonBlock() = default;

short MangroveButtonBlock::getId() const {
  return 7083 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> MangroveButtonBlock::clone() const {
  std::shared_ptr<MangroveButtonBlock> copy = std::make_shared<MangroveButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
