

#include "pointed_dripstone_block.h"

PointedDripstoneBlock::PointedDripstoneBlock() = default;
PointedDripstoneBlock::~PointedDripstoneBlock() = default;

short PointedDripstoneBlock::getId() const {
  return 19638 + waterlogged * 1 + vertical_direction * 2 + thickness * 4;
}

std::shared_ptr<Block> PointedDripstoneBlock::clone() const {
  std::shared_ptr<PointedDripstoneBlock> copy = std::make_shared<PointedDripstoneBlock>();
  copy->thickness = thickness;
  copy->vertical_direction = vertical_direction;
  copy->waterlogged = waterlogged;
  return copy;
}
