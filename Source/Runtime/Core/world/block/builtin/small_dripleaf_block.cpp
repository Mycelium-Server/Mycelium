

#include "small_dripleaf_block.h"

SmallDripleafBlock::SmallDripleafBlock() = default;
SmallDripleafBlock::~SmallDripleafBlock() = default;

short SmallDripleafBlock::getId() const {
  return 19758 + waterlogged * 1 + half * 2 + facing * 4;
}

std::shared_ptr<Block> SmallDripleafBlock::clone() const {
  std::shared_ptr<SmallDripleafBlock> copy = std::make_shared<SmallDripleafBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->waterlogged = waterlogged;
  return copy;
}
