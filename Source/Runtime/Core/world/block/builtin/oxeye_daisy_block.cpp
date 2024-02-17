

#include "oxeye_daisy_block.h"

OxeyeDaisyBlock::OxeyeDaisyBlock() = default;
OxeyeDaisyBlock::~OxeyeDaisyBlock() = default;

short OxeyeDaisyBlock::getId() const {
  return 1675;
}

std::shared_ptr<Block> OxeyeDaisyBlock::clone() const {
  std::shared_ptr<OxeyeDaisyBlock> copy = std::make_shared<OxeyeDaisyBlock>();
  return copy;
}
