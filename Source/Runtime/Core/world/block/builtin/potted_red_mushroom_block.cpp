

#include "potted_red_mushroom_block.h"

PottedRedMushroomBlock::PottedRedMushroomBlock() = default;
PottedRedMushroomBlock::~PottedRedMushroomBlock() = default;

short PottedRedMushroomBlock::getId() const {
  return 6919;
}

std::shared_ptr<Block> PottedRedMushroomBlock::clone() const {
  std::shared_ptr<PottedRedMushroomBlock> copy = std::make_shared<PottedRedMushroomBlock>();
  return copy;
}
