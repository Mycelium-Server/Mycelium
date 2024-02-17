

#include "azalea_block.h"

AzaleaBlock::AzaleaBlock() = default;
AzaleaBlock::~AzaleaBlock() = default;

short AzaleaBlock::getId() const {
  return 19714;
}

std::shared_ptr<Block> AzaleaBlock::clone() const {
  std::shared_ptr<AzaleaBlock> copy = std::make_shared<AzaleaBlock>();
  return copy;
}
