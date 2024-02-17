

#include "potted_red_tulip_block.h"

PottedRedTulipBlock::PottedRedTulipBlock() = default;
PottedRedTulipBlock::~PottedRedTulipBlock() = default;

short PottedRedTulipBlock::getId() const {
  return 6911;
}

std::shared_ptr<Block> PottedRedTulipBlock::clone() const {
  std::shared_ptr<PottedRedTulipBlock> copy = std::make_shared<PottedRedTulipBlock>();
  return copy;
}
