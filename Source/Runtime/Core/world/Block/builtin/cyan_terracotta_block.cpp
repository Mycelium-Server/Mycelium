

#include "cyan_terracotta_block.h"

CyanTerracottaBlock::CyanTerracottaBlock() = default;
CyanTerracottaBlock::~CyanTerracottaBlock() = default;

short CyanTerracottaBlock::getId() const {
  return 7485;
}

std::shared_ptr<Block> CyanTerracottaBlock::clone() const {
  std::shared_ptr<CyanTerracottaBlock> copy = std::make_shared<CyanTerracottaBlock>();
  return copy;
}
