

#include "cyan_glazed_terracotta_block.h"

CyanGlazedTerracottaBlock::CyanGlazedTerracottaBlock() = default;
CyanGlazedTerracottaBlock::~CyanGlazedTerracottaBlock() = default;

short CyanGlazedTerracottaBlock::getId() const {
  return 10291 + facing * 1;
}

std::shared_ptr<Block> CyanGlazedTerracottaBlock::clone() const {
  std::shared_ptr<CyanGlazedTerracottaBlock> copy = std::make_shared<CyanGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
