

#include "acacia_planks_block.h"

AcaciaPlanksBlock::AcaciaPlanksBlock() = default;
AcaciaPlanksBlock::~AcaciaPlanksBlock() = default;

short AcaciaPlanksBlock::getId() const {
  return 19;
}

std::shared_ptr<Block> AcaciaPlanksBlock::clone() const {
  std::shared_ptr<AcaciaPlanksBlock> copy = std::make_shared<AcaciaPlanksBlock>();
  return copy;
}
