

#include "green_shulker_box_block.h"

GreenShulkerBoxBlock::GreenShulkerBoxBlock() = default;
GreenShulkerBoxBlock::~GreenShulkerBoxBlock() = default;

short GreenShulkerBoxBlock::getId() const {
  return 10237 + facing * 1;
}

std::shared_ptr<Block> GreenShulkerBoxBlock::clone() const {
  std::shared_ptr<GreenShulkerBoxBlock> copy = std::make_shared<GreenShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
