

#include "attached_melon_stem_block.h"

AttachedMelonStemBlock::AttachedMelonStemBlock() = default;
AttachedMelonStemBlock::~AttachedMelonStemBlock() = default;

short AttachedMelonStemBlock::getId() const {
  return 5147 + facing * 1;
}

std::shared_ptr<Block> AttachedMelonStemBlock::clone() const {
  std::shared_ptr<AttachedMelonStemBlock> copy = std::make_shared<AttachedMelonStemBlock>();
  copy->facing = facing;
  return copy;
}
