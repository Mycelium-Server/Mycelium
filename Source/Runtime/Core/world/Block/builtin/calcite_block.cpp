

#include "calcite_block.h"

CalciteBlock::CalciteBlock() = default;
CalciteBlock::~CalciteBlock() = default;

short CalciteBlock::getId() const {
  return 18670;
}

std::shared_ptr<Block> CalciteBlock::clone() const {
  std::shared_ptr<CalciteBlock> copy = std::make_shared<CalciteBlock>();
  return copy;
}
