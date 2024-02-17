

#include "hopper_block.h"

HopperBlock::HopperBlock() = default;
HopperBlock::~HopperBlock() = default;

short HopperBlock::getId() const {
  return 7345 + facing * 1 + enabled * 5;
}

std::shared_ptr<Block> HopperBlock::clone() const {
  std::shared_ptr<HopperBlock> copy = std::make_shared<HopperBlock>();
  copy->enabled = enabled;
  copy->facing = facing;
  return copy;
}
