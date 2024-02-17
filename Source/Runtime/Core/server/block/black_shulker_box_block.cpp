

#include "black_shulker_box_block.h"

BlackShulkerBoxBlock::BlackShulkerBoxBlock() = default;
BlackShulkerBoxBlock::~BlackShulkerBoxBlock() = default;

short BlackShulkerBoxBlock::getId() const {
  return 10249 + facing * 1;
}

std::shared_ptr<Block> BlackShulkerBoxBlock::clone() const {
  std::shared_ptr<BlackShulkerBoxBlock> copy = std::make_shared<BlackShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
