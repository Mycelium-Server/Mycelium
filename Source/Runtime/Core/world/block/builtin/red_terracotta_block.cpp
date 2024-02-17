

#include "red_terracotta_block.h"

RedTerracottaBlock::RedTerracottaBlock() = default;
RedTerracottaBlock::~RedTerracottaBlock() = default;

short RedTerracottaBlock::getId() const {
  return 7490;
}

std::shared_ptr<Block> RedTerracottaBlock::clone() const {
  std::shared_ptr<RedTerracottaBlock> copy = std::make_shared<RedTerracottaBlock>();
  return copy;
}
