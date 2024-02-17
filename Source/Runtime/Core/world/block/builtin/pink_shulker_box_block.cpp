

#include "pink_shulker_box_block.h"

PinkShulkerBoxBlock::PinkShulkerBoxBlock() = default;
PinkShulkerBoxBlock::~PinkShulkerBoxBlock() = default;

short PinkShulkerBoxBlock::getId() const {
  return 10195 + facing * 1;
}

std::shared_ptr<Block> PinkShulkerBoxBlock::clone() const {
  std::shared_ptr<PinkShulkerBoxBlock> copy = std::make_shared<PinkShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
