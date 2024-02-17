

#include "light_blue_shulker_box_block.h"

LightBlueShulkerBoxBlock::LightBlueShulkerBoxBlock() = default;
LightBlueShulkerBoxBlock::~LightBlueShulkerBoxBlock() = default;

short LightBlueShulkerBoxBlock::getId() const {
  return 10177 + facing * 1;
}

std::shared_ptr<Block> LightBlueShulkerBoxBlock::clone() const {
  std::shared_ptr<LightBlueShulkerBoxBlock> copy = std::make_shared<LightBlueShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
