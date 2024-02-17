

#include "cyan_concrete_powder_block.h"

CyanConcretePowderBlock::CyanConcretePowderBlock() = default;
CyanConcretePowderBlock::~CyanConcretePowderBlock() = default;

short CyanConcretePowderBlock::getId() const {
  return 10344;
}

std::shared_ptr<Block> CyanConcretePowderBlock::clone() const {
  std::shared_ptr<CyanConcretePowderBlock> copy = std::make_shared<CyanConcretePowderBlock>();
  return copy;
}
