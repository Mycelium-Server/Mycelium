

#include "ancient_debris_block.h"

AncientDebrisBlock::AncientDebrisBlock() = default;
AncientDebrisBlock::~AncientDebrisBlock() = default;

short AncientDebrisBlock::getId() const {
  return 17036;
}

std::shared_ptr<Block> AncientDebrisBlock::clone() const {
  std::shared_ptr<AncientDebrisBlock> copy = std::make_shared<AncientDebrisBlock>();
  return copy;
}
