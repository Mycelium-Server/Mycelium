

#include "cyan_shulker_box_block.h"

CyanShulkerBoxBlock::CyanShulkerBoxBlock() = default;
CyanShulkerBoxBlock::~CyanShulkerBoxBlock() = default;

short CyanShulkerBoxBlock::getId() const {
  return 10213 + facing * 1;
}

std::shared_ptr<Block> CyanShulkerBoxBlock::clone() const {
  std::shared_ptr<CyanShulkerBoxBlock> copy = std::make_shared<CyanShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
