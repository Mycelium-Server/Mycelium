

#include "dark_prismarine_block.h"

DarkPrismarineBlock::DarkPrismarineBlock() = default;
DarkPrismarineBlock::~DarkPrismarineBlock() = default;

short DarkPrismarineBlock::getId() const {
  return 8344;
}

std::shared_ptr<Block> DarkPrismarineBlock::clone() const {
  std::shared_ptr<DarkPrismarineBlock> copy = std::make_shared<DarkPrismarineBlock>();
  return copy;
}
