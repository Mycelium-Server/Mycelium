

#include "spruce_button_block.h"

SpruceButtonBlock::SpruceButtonBlock() = default;
SpruceButtonBlock::~SpruceButtonBlock() = default;

short SpruceButtonBlock::getId() const {
  return 6963 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> SpruceButtonBlock::clone() const {
  std::shared_ptr<SpruceButtonBlock> copy = std::make_shared<SpruceButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
