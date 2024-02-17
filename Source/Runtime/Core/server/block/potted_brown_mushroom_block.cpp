

#include "potted_brown_mushroom_block.h"

PottedBrownMushroomBlock::PottedBrownMushroomBlock() = default;
PottedBrownMushroomBlock::~PottedBrownMushroomBlock() = default;

short PottedBrownMushroomBlock::getId() const {
  return 6920;
}

std::shared_ptr<Block> PottedBrownMushroomBlock::clone() const {
  std::shared_ptr<PottedBrownMushroomBlock> copy = std::make_shared<PottedBrownMushroomBlock>();
  return copy;
}
