

#include "infested_mossy_stone_bricks_block.h"

InfestedMossyStoneBricksBlock::InfestedMossyStoneBricksBlock() = default;
InfestedMossyStoneBricksBlock::~InfestedMossyStoneBricksBlock() = default;

short InfestedMossyStoneBricksBlock::getId() const {
  return 4877;
}

std::shared_ptr<Block> InfestedMossyStoneBricksBlock::clone() const {
  std::shared_ptr<InfestedMossyStoneBricksBlock> copy = std::make_shared<InfestedMossyStoneBricksBlock>();
  return copy;
}
