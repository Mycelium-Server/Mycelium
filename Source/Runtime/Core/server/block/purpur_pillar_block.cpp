

#include "purpur_pillar_block.h"

PurpurPillarBlock::PurpurPillarBlock() = default;
PurpurPillarBlock::~PurpurPillarBlock() = default;

short PurpurPillarBlock::getId() const {
  return 10016 + axis * 1;
}

std::shared_ptr<Block> PurpurPillarBlock::clone() const {
  std::shared_ptr<PurpurPillarBlock> copy = std::make_shared<PurpurPillarBlock>();
  copy->axis = axis;
  return copy;
}
