

#include "light_gray_shulker_box_block.h"

LightGrayShulkerBoxBlock::LightGrayShulkerBoxBlock() = default;
LightGrayShulkerBoxBlock::~LightGrayShulkerBoxBlock() = default;

short LightGrayShulkerBoxBlock::getId() const {
  return 10207 + facing * 1;
}

std::shared_ptr<Block> LightGrayShulkerBoxBlock::clone() const {
  std::shared_ptr<LightGrayShulkerBoxBlock> copy = std::make_shared<LightGrayShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
