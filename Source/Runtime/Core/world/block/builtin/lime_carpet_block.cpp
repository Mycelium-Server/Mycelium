

#include "lime_carpet_block.h"

LimeCarpetBlock::LimeCarpetBlock() = default;
LimeCarpetBlock::~LimeCarpetBlock() = default;

short LimeCarpetBlock::getId() const {
  return 8612;
}

std::shared_ptr<Block> LimeCarpetBlock::clone() const {
  std::shared_ptr<LimeCarpetBlock> copy = std::make_shared<LimeCarpetBlock>();
  return copy;
}
