

#include "infested_chiseled_stone_bricks_block.h"

InfestedChiseledStoneBricksBlock::InfestedChiseledStoneBricksBlock() = default;
InfestedChiseledStoneBricksBlock::~InfestedChiseledStoneBricksBlock() = default;

short InfestedChiseledStoneBricksBlock::getId() const {
  return 4879;
}

std::shared_ptr<Block> InfestedChiseledStoneBricksBlock::clone() const {
  std::shared_ptr<InfestedChiseledStoneBricksBlock> copy = std::make_shared<InfestedChiseledStoneBricksBlock>();
  return copy;
}
