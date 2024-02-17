

#include "brown_shulker_box_block.h"

BrownShulkerBoxBlock::BrownShulkerBoxBlock() = default;
BrownShulkerBoxBlock::~BrownShulkerBoxBlock() = default;

short BrownShulkerBoxBlock::getId() const {
  return 10231 + facing * 1;
}

std::shared_ptr<Block> BrownShulkerBoxBlock::clone() const {
  std::shared_ptr<BrownShulkerBoxBlock> copy = std::make_shared<BrownShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
