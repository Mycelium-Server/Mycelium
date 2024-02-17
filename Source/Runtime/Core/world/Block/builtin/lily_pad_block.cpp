

#include "lily_pad_block.h"

LilyPadBlock::LilyPadBlock() = default;
LilyPadBlock::~LilyPadBlock() = default;

short LilyPadBlock::getId() const {
  return 5601;
}

std::shared_ptr<Block> LilyPadBlock::clone() const {
  std::shared_ptr<LilyPadBlock> copy = std::make_shared<LilyPadBlock>();
  return copy;
}
