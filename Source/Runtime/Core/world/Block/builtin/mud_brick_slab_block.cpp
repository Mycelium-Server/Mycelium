

#include "mud_brick_slab_block.h"

MudBrickSlabBlock::MudBrickSlabBlock() = default;
MudBrickSlabBlock::~MudBrickSlabBlock() = default;

short MudBrickSlabBlock::getId() const {
  return 9131 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> MudBrickSlabBlock::clone() const {
  std::shared_ptr<MudBrickSlabBlock> copy = std::make_shared<MudBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
