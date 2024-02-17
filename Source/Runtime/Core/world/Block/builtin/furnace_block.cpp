

#include "furnace_block.h"

FurnaceBlock::FurnaceBlock() = default;
FurnaceBlock::~FurnaceBlock() = default;

short FurnaceBlock::getId() const {
  return 3628 + lit * 1 + facing * 2;
}

std::shared_ptr<Block> FurnaceBlock::clone() const {
  std::shared_ptr<FurnaceBlock> copy = std::make_shared<FurnaceBlock>();
  copy->facing = facing;
  copy->lit = lit;
  return copy;
}
