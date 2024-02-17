

#include "melon_stem_block.h"

MelonStemBlock::MelonStemBlock() = default;
MelonStemBlock::~MelonStemBlock() = default;

short MelonStemBlock::getId() const {
  return 5159 + age * 1;
}

std::shared_ptr<Block> MelonStemBlock::clone() const {
  std::shared_ptr<MelonStemBlock> copy = std::make_shared<MelonStemBlock>();
  copy->age = age;
  return copy;
}
