

#include "red_glazed_terracotta_block.h"

RedGlazedTerracottaBlock::RedGlazedTerracottaBlock() = default;
RedGlazedTerracottaBlock::~RedGlazedTerracottaBlock() = default;

short RedGlazedTerracottaBlock::getId() const {
  return 10311 + facing * 1;
}

std::shared_ptr<Block> RedGlazedTerracottaBlock::clone() const {
  std::shared_ptr<RedGlazedTerracottaBlock> copy = std::make_shared<RedGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
