

#include "shulker_box_block.h"

ShulkerBoxBlock::ShulkerBoxBlock() = default;
ShulkerBoxBlock::~ShulkerBoxBlock() = default;

short ShulkerBoxBlock::getId() const {
  return 10153 + facing * 1;
}

std::shared_ptr<Block> ShulkerBoxBlock::clone() const {
  std::shared_ptr<ShulkerBoxBlock> copy = std::make_shared<ShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
