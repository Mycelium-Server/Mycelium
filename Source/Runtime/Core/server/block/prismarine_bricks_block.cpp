

#include "prismarine_bricks_block.h"

PrismarineBricksBlock::PrismarineBricksBlock() = default;
PrismarineBricksBlock::~PrismarineBricksBlock() = default;

short PrismarineBricksBlock::getId() const {
  return 8343;
}

std::shared_ptr<Block> PrismarineBricksBlock::clone() const {
  std::shared_ptr<PrismarineBricksBlock> copy = std::make_shared<PrismarineBricksBlock>();
  return copy;
}
