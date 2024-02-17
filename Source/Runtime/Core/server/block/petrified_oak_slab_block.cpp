

#include "petrified_oak_slab_block.h"

PetrifiedOakSlabBlock::PetrifiedOakSlabBlock() = default;
PetrifiedOakSlabBlock::~PetrifiedOakSlabBlock() = default;

short PetrifiedOakSlabBlock::getId() const {
  return 9107 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PetrifiedOakSlabBlock::clone() const {
  std::shared_ptr<PetrifiedOakSlabBlock> copy = std::make_shared<PetrifiedOakSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
