

#include "gray_shulker_box_block.h"

GrayShulkerBoxBlock::GrayShulkerBoxBlock() = default;
GrayShulkerBoxBlock::~GrayShulkerBoxBlock() = default;

short GrayShulkerBoxBlock::getId() const {
  return 10201 + facing * 1;
}

std::shared_ptr<Block> GrayShulkerBoxBlock::clone() const {
  std::shared_ptr<GrayShulkerBoxBlock> copy = std::make_shared<GrayShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
