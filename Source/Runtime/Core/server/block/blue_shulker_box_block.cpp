

#include "blue_shulker_box_block.h"

BlueShulkerBoxBlock::BlueShulkerBoxBlock() = default;
BlueShulkerBoxBlock::~BlueShulkerBoxBlock() = default;

short BlueShulkerBoxBlock::getId() const {
  return 10225 + facing * 1;
}

std::shared_ptr<Block> BlueShulkerBoxBlock::clone() const {
  std::shared_ptr<BlueShulkerBoxBlock> copy = std::make_shared<BlueShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
