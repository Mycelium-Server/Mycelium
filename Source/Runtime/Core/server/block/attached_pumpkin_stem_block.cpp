

#include "attached_pumpkin_stem_block.h"

AttachedPumpkinStemBlock::AttachedPumpkinStemBlock() = default;
AttachedPumpkinStemBlock::~AttachedPumpkinStemBlock() = default;

short AttachedPumpkinStemBlock::getId() const {
  return 5143 + facing * 1;
}

std::shared_ptr<Block> AttachedPumpkinStemBlock::clone() const {
  std::shared_ptr<AttachedPumpkinStemBlock> copy = std::make_shared<AttachedPumpkinStemBlock>();
  copy->facing = facing;
  return copy;
}
