

#include "cobblestone_block.h"

CobblestoneBlock::CobblestoneBlock() = default;
CobblestoneBlock::~CobblestoneBlock() = default;

short CobblestoneBlock::getId() const {
  return 14;
}

std::shared_ptr<Block> CobblestoneBlock::clone() const {
  std::shared_ptr<CobblestoneBlock> copy = std::make_shared<CobblestoneBlock>();
  return copy;
}
