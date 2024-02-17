

#include "purpur_block_block.h"

PurpurBlockBlock::PurpurBlockBlock() = default;
PurpurBlockBlock::~PurpurBlockBlock() = default;

short PurpurBlockBlock::getId() const {
  return 10015;
}

std::shared_ptr<Block> PurpurBlockBlock::clone() const {
  std::shared_ptr<PurpurBlockBlock> copy = std::make_shared<PurpurBlockBlock>();
  return copy;
}
