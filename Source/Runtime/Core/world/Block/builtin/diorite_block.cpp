

#include "diorite_block.h"

DioriteBlock::DioriteBlock() = default;
DioriteBlock::~DioriteBlock() = default;

short DioriteBlock::getId() const {
  return 4;
}

std::shared_ptr<Block> DioriteBlock::clone() const {
  std::shared_ptr<DioriteBlock> copy = std::make_shared<DioriteBlock>();
  return copy;
}
