

#include "pumpkin_stem_block.h"

PumpkinStemBlock::PumpkinStemBlock() = default;
PumpkinStemBlock::~PumpkinStemBlock() = default;

short PumpkinStemBlock::getId() const {
  return 5151 + age * 1;
}

std::shared_ptr<Block> PumpkinStemBlock::clone() const {
  std::shared_ptr<PumpkinStemBlock> copy = std::make_shared<PumpkinStemBlock>();
  copy->age = age;
  return copy;
}
