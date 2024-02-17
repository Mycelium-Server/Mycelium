

#include "purple_shulker_box_block.h"

PurpleShulkerBoxBlock::PurpleShulkerBoxBlock() = default;
PurpleShulkerBoxBlock::~PurpleShulkerBoxBlock() = default;

short PurpleShulkerBoxBlock::getId() const {
  return 10219 + facing * 1;
}

std::shared_ptr<Block> PurpleShulkerBoxBlock::clone() const {
  std::shared_ptr<PurpleShulkerBoxBlock> copy = std::make_shared<PurpleShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
