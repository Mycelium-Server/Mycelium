

#include "purple_glazed_terracotta_block.h"

PurpleGlazedTerracottaBlock::PurpleGlazedTerracottaBlock() = default;
PurpleGlazedTerracottaBlock::~PurpleGlazedTerracottaBlock() = default;

short PurpleGlazedTerracottaBlock::getId() const {
  return 10295 + facing * 1;
}

std::shared_ptr<Block> PurpleGlazedTerracottaBlock::clone() const {
  std::shared_ptr<PurpleGlazedTerracottaBlock> copy = std::make_shared<PurpleGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
