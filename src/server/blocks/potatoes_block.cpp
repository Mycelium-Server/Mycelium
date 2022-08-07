#include "potatoes_block.h"

PotatoesBlock::PotatoesBlock() = default;
PotatoesBlock::~PotatoesBlock() = default;

short PotatoesBlock::getId() const {
  if (age == AGE_0) return 6931;
  if (age == AGE_1) return 6932;
  if (age == AGE_2) return 6933;
  if (age == AGE_3) return 6934;
  if (age == AGE_4) return 6935;
  if (age == AGE_5) return 6936;
  if (age == AGE_6) return 6937;
  if (age == AGE_7) return 6938;
  return 6931;
}
