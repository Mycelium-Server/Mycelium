

#include "raw_iron_block_block.h"

RawIronBlockBlock::RawIronBlockBlock() = default;
RawIronBlockBlock::~RawIronBlockBlock() = default;

short RawIronBlockBlock::getId() const {
  return 21432;
}

std::shared_ptr<Block> RawIronBlockBlock::clone() const {
  std::shared_ptr<RawIronBlockBlock> copy = std::make_shared<RawIronBlockBlock>();
  return copy;
}
