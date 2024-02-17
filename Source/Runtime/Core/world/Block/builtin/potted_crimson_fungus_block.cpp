

#include "potted_crimson_fungus_block.h"

PottedCrimsonFungusBlock::PottedCrimsonFungusBlock() = default;
PottedCrimsonFungusBlock::~PottedCrimsonFungusBlock() = default;

short PottedCrimsonFungusBlock::getId() const {
  return 17043;
}

std::shared_ptr<Block> PottedCrimsonFungusBlock::clone() const {
  std::shared_ptr<PottedCrimsonFungusBlock> copy = std::make_shared<PottedCrimsonFungusBlock>();
  return copy;
}
