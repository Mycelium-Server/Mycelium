

#include "yellow_shulker_box_block.h"

YellowShulkerBoxBlock::YellowShulkerBoxBlock() = default;
YellowShulkerBoxBlock::~YellowShulkerBoxBlock() = default;

short YellowShulkerBoxBlock::getId() const {
  return 10183 + facing * 1;
}

std::shared_ptr<Block> YellowShulkerBoxBlock::clone() const {
  std::shared_ptr<YellowShulkerBoxBlock> copy = std::make_shared<YellowShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
