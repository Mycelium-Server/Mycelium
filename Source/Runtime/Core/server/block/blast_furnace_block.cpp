

#include "blast_furnace_block.h"

BlastFurnaceBlock::BlastFurnaceBlock() = default;
BlastFurnaceBlock::~BlastFurnaceBlock() = default;

short BlastFurnaceBlock::getId() const {
  return 16016 + lit * 1 + facing * 2;
}

std::shared_ptr<Block> BlastFurnaceBlock::clone() const {
  std::shared_ptr<BlastFurnaceBlock> copy = std::make_shared<BlastFurnaceBlock>();
  copy->facing = facing;
  copy->lit = lit;
  return copy;
}
