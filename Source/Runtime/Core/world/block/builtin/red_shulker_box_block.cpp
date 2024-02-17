

#include "red_shulker_box_block.h"

RedShulkerBoxBlock::RedShulkerBoxBlock() = default;
RedShulkerBoxBlock::~RedShulkerBoxBlock() = default;

short RedShulkerBoxBlock::getId() const {
  return 10243 + facing * 1;
}

std::shared_ptr<Block> RedShulkerBoxBlock::clone() const {
  std::shared_ptr<RedShulkerBoxBlock> copy = std::make_shared<RedShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
