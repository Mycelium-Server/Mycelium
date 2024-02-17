

#include "acacia_sapling_block.h"

AcaciaSaplingBlock::AcaciaSaplingBlock() = default;
AcaciaSaplingBlock::~AcaciaSaplingBlock() = default;

short AcaciaSaplingBlock::getId() const {
  return 30 + stage * 1;
}

std::shared_ptr<Block> AcaciaSaplingBlock::clone() const {
  std::shared_ptr<AcaciaSaplingBlock> copy = std::make_shared<AcaciaSaplingBlock>();
  copy->stage = stage;
  return copy;
}
