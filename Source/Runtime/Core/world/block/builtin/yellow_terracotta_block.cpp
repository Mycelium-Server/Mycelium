

#include "yellow_terracotta_block.h"

YellowTerracottaBlock::YellowTerracottaBlock() = default;
YellowTerracottaBlock::~YellowTerracottaBlock() = default;

short YellowTerracottaBlock::getId() const {
  return 7480;
}

std::shared_ptr<Block> YellowTerracottaBlock::clone() const {
  std::shared_ptr<YellowTerracottaBlock> copy = std::make_shared<YellowTerracottaBlock>();
  return copy;
}
