

#include "orange_shulker_box_block.h"

OrangeShulkerBoxBlock::OrangeShulkerBoxBlock() = default;
OrangeShulkerBoxBlock::~OrangeShulkerBoxBlock() = default;

short OrangeShulkerBoxBlock::getId() const {
  return 10165 + facing * 1;
}

std::shared_ptr<Block> OrangeShulkerBoxBlock::clone() const {
  std::shared_ptr<OrangeShulkerBoxBlock> copy = std::make_shared<OrangeShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
