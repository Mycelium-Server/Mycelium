

#include "lapis_block_block.h"

LapisBlockBlock::LapisBlockBlock() = default;
LapisBlockBlock::~LapisBlockBlock() = default;

short LapisBlockBlock::getId() const {
  return 463;
}

std::shared_ptr<Block> LapisBlockBlock::clone() const {
  std::shared_ptr<LapisBlockBlock> copy = std::make_shared<LapisBlockBlock>();
  return copy;
}
