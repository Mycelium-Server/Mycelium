

#include "copper_ore_block.h"

CopperOreBlock::CopperOreBlock() = default;
CopperOreBlock::~CopperOreBlock() = default;

short CopperOreBlock::getId() const {
  return 18912;
}

std::shared_ptr<Block> CopperOreBlock::clone() const {
  std::shared_ptr<CopperOreBlock> copy = std::make_shared<CopperOreBlock>();
  return copy;
}
