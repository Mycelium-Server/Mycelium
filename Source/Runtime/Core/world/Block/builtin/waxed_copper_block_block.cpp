

#include "waxed_copper_block_block.h"

WaxedCopperBlockBlock::WaxedCopperBlockBlock() = default;
WaxedCopperBlockBlock::~WaxedCopperBlockBlock() = default;

short WaxedCopperBlockBlock::getId() const {
  return 19262;
}

std::shared_ptr<Block> WaxedCopperBlockBlock::clone() const {
  std::shared_ptr<WaxedCopperBlockBlock> copy = std::make_shared<WaxedCopperBlockBlock>();
  return copy;
}
