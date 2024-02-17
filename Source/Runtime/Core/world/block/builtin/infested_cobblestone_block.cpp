

#include "infested_cobblestone_block.h"

InfestedCobblestoneBlock::InfestedCobblestoneBlock() = default;
InfestedCobblestoneBlock::~InfestedCobblestoneBlock() = default;

short InfestedCobblestoneBlock::getId() const {
  return 4875;
}

std::shared_ptr<Block> InfestedCobblestoneBlock::clone() const {
  std::shared_ptr<InfestedCobblestoneBlock> copy = std::make_shared<InfestedCobblestoneBlock>();
  return copy;
}
