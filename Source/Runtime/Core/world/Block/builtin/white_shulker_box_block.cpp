

#include "white_shulker_box_block.h"

WhiteShulkerBoxBlock::WhiteShulkerBoxBlock() = default;
WhiteShulkerBoxBlock::~WhiteShulkerBoxBlock() = default;

short WhiteShulkerBoxBlock::getId() const {
  return 10159 + facing * 1;
}

std::shared_ptr<Block> WhiteShulkerBoxBlock::clone() const {
  std::shared_ptr<WhiteShulkerBoxBlock> copy = std::make_shared<WhiteShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
