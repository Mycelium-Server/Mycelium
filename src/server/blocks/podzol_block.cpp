#include "podzol_block.h"

PodzolBlock::PodzolBlock() = default;
PodzolBlock::~PodzolBlock() = default;

short PodzolBlock::getId() const {
  if (snowy == SNOWY_TRUE) return 12;
  if (snowy == SNOWY_FALSE) return 13;
  return 13;
}
