

#include "potted_oxeye_daisy_block.h"

PottedOxeyeDaisyBlock::PottedOxeyeDaisyBlock() = default;
PottedOxeyeDaisyBlock::~PottedOxeyeDaisyBlock() = default;

short PottedOxeyeDaisyBlock::getId() const {
  return 6915;
}

std::shared_ptr<Block> PottedOxeyeDaisyBlock::clone() const {
  std::shared_ptr<PottedOxeyeDaisyBlock> copy = std::make_shared<PottedOxeyeDaisyBlock>();
  return copy;
}
