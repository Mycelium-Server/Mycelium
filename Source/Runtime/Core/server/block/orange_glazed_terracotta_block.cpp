

#include "orange_glazed_terracotta_block.h"

OrangeGlazedTerracottaBlock::OrangeGlazedTerracottaBlock() = default;
OrangeGlazedTerracottaBlock::~OrangeGlazedTerracottaBlock() = default;

short OrangeGlazedTerracottaBlock::getId() const {
  return 10259 + facing * 1;
}

std::shared_ptr<Block> OrangeGlazedTerracottaBlock::clone() const {
  std::shared_ptr<OrangeGlazedTerracottaBlock> copy = std::make_shared<OrangeGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
