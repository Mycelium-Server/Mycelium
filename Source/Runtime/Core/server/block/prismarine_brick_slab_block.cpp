

#include "prismarine_brick_slab_block.h"

PrismarineBrickSlabBlock::PrismarineBrickSlabBlock() = default;
PrismarineBrickSlabBlock::~PrismarineBrickSlabBlock() = default;

short PrismarineBrickSlabBlock::getId() const {
  return 8591 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PrismarineBrickSlabBlock::clone() const {
  std::shared_ptr<PrismarineBrickSlabBlock> copy = std::make_shared<PrismarineBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
