

#include "lime_shulker_box_block.h"

LimeShulkerBoxBlock::LimeShulkerBoxBlock() = default;
LimeShulkerBoxBlock::~LimeShulkerBoxBlock() = default;

short LimeShulkerBoxBlock::getId() const {
  return 10189 + facing * 1;
}

std::shared_ptr<Block> LimeShulkerBoxBlock::clone() const {
  std::shared_ptr<LimeShulkerBoxBlock> copy = std::make_shared<LimeShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
