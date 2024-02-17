

#include "composter_block.h"

ComposterBlock::ComposterBlock() = default;
ComposterBlock::~ComposterBlock() = default;

short ComposterBlock::getId() const {
  return 16960 + level * 1;
}

std::shared_ptr<Block> ComposterBlock::clone() const {
  std::shared_ptr<ComposterBlock> copy = std::make_shared<ComposterBlock>();
  copy->level = level;
  return copy;
}
