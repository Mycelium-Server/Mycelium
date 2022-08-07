#include "mycelium_block.h"

MyceliumBlock::MyceliumBlock() = default;
MyceliumBlock::~MyceliumBlock() = default;

short MyceliumBlock::getId() const {
  if (snowy == SNOWY_TRUE) return 5599;
  if (snowy == SNOWY_FALSE) return 5600;
  return 5600;
}
