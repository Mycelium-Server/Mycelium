

#include "warped_wart_block_block.h"

WarpedWartBlockBlock::WarpedWartBlockBlock() = default;
WarpedWartBlockBlock::~WarpedWartBlockBlock() = default;

short WarpedWartBlockBlock::getId() const {
  return 16181;
}

std::shared_ptr<Block> WarpedWartBlockBlock::clone() const {
  std::shared_ptr<WarpedWartBlockBlock> copy = std::make_shared<WarpedWartBlockBlock>();
  return copy;
}
