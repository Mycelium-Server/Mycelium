

#include "jungle_planks_block.h"

JunglePlanksBlock::JunglePlanksBlock() = default;
JunglePlanksBlock::~JunglePlanksBlock() = default;

short JunglePlanksBlock::getId() const {
  return 18;
}

std::shared_ptr<Block> JunglePlanksBlock::clone() const {
  std::shared_ptr<JunglePlanksBlock> copy = std::make_shared<JunglePlanksBlock>();
  return copy;
}
