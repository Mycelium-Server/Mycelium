

#include "raw_copper_block_block.h"

RawCopperBlockBlock::RawCopperBlockBlock() = default;
RawCopperBlockBlock::~RawCopperBlockBlock() = default;

short RawCopperBlockBlock::getId() const {
  return 21433;
}

std::shared_ptr<Block> RawCopperBlockBlock::clone() const {
  std::shared_ptr<RawCopperBlockBlock> copy = std::make_shared<RawCopperBlockBlock>();
  return copy;
}
