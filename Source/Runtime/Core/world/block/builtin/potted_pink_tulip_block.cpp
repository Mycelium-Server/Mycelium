

#include "potted_pink_tulip_block.h"

PottedPinkTulipBlock::PottedPinkTulipBlock() = default;
PottedPinkTulipBlock::~PottedPinkTulipBlock() = default;

short PottedPinkTulipBlock::getId() const {
  return 6914;
}

std::shared_ptr<Block> PottedPinkTulipBlock::clone() const {
  std::shared_ptr<PottedPinkTulipBlock> copy = std::make_shared<PottedPinkTulipBlock>();
  return copy;
}
