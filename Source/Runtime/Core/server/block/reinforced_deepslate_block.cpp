

#include "reinforced_deepslate_block.h"

ReinforcedDeepslateBlock::ReinforcedDeepslateBlock() = default;
ReinforcedDeepslateBlock::~ReinforcedDeepslateBlock() = default;

short ReinforcedDeepslateBlock::getId() const {
  return 21447;
}

std::shared_ptr<Block> ReinforcedDeepslateBlock::clone() const {
  std::shared_ptr<ReinforcedDeepslateBlock> copy = std::make_shared<ReinforcedDeepslateBlock>();
  return copy;
}
