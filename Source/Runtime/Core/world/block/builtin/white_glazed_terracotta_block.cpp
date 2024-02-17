

#include "white_glazed_terracotta_block.h"

WhiteGlazedTerracottaBlock::WhiteGlazedTerracottaBlock() = default;
WhiteGlazedTerracottaBlock::~WhiteGlazedTerracottaBlock() = default;

short WhiteGlazedTerracottaBlock::getId() const {
  return 10255 + facing * 1;
}

std::shared_ptr<Block> WhiteGlazedTerracottaBlock::clone() const {
  std::shared_ptr<WhiteGlazedTerracottaBlock> copy = std::make_shared<WhiteGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
