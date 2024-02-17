

#include "white_stained_glass_block.h"

WhiteStainedGlassBlock::WhiteStainedGlassBlock() = default;
WhiteStainedGlassBlock::~WhiteStainedGlassBlock() = default;

short WhiteStainedGlassBlock::getId() const {
  return 4404;
}

std::shared_ptr<Block> WhiteStainedGlassBlock::clone() const {
  std::shared_ptr<WhiteStainedGlassBlock> copy = std::make_shared<WhiteStainedGlassBlock>();
  return copy;
}
