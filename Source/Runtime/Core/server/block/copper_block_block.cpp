

#include "copper_block_block.h"

CopperBlockBlock::CopperBlockBlock() = default;
CopperBlockBlock::~CopperBlockBlock() = default;

short CopperBlockBlock::getId() const {
  return 18911;
}

std::shared_ptr<Block> CopperBlockBlock::clone() const {
  std::shared_ptr<CopperBlockBlock> copy = std::make_shared<CopperBlockBlock>();
  return copy;
}
