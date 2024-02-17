

#include "magenta_shulker_box_block.h"

MagentaShulkerBoxBlock::MagentaShulkerBoxBlock() = default;
MagentaShulkerBoxBlock::~MagentaShulkerBoxBlock() = default;

short MagentaShulkerBoxBlock::getId() const {
  return 10171 + facing * 1;
}

std::shared_ptr<Block> MagentaShulkerBoxBlock::clone() const {
  std::shared_ptr<MagentaShulkerBoxBlock> copy = std::make_shared<MagentaShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
