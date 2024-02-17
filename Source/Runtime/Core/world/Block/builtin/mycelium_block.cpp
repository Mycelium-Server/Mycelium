

#include "mycelium_block.h"

MyceliumBlock::MyceliumBlock() = default;
MyceliumBlock::~MyceliumBlock() = default;

short MyceliumBlock::getId() const {
  return 5599 + snowy * 1;
}

std::shared_ptr<Block> MyceliumBlock::clone() const {
  std::shared_ptr<MyceliumBlock> copy = std::make_shared<MyceliumBlock>();
  copy->snowy = snowy;
  return copy;
}
