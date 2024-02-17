

#include "crimson_planks_block.h"

CrimsonPlanksBlock::CrimsonPlanksBlock() = default;
CrimsonPlanksBlock::~CrimsonPlanksBlock() = default;

short CrimsonPlanksBlock::getId() const {
  return 16254;
}

std::shared_ptr<Block> CrimsonPlanksBlock::clone() const {
  std::shared_ptr<CrimsonPlanksBlock> copy = std::make_shared<CrimsonPlanksBlock>();
  return copy;
}
