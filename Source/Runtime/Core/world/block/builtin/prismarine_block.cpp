

#include "prismarine_block.h"

PrismarineBlock::PrismarineBlock() = default;
PrismarineBlock::~PrismarineBlock() = default;

short PrismarineBlock::getId() const {
  return 8342;
}

std::shared_ptr<Block> PrismarineBlock::clone() const {
  std::shared_ptr<PrismarineBlock> copy = std::make_shared<PrismarineBlock>();
  return copy;
}
