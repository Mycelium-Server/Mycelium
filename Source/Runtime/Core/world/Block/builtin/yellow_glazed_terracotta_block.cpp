

#include "yellow_glazed_terracotta_block.h"

YellowGlazedTerracottaBlock::YellowGlazedTerracottaBlock() = default;
YellowGlazedTerracottaBlock::~YellowGlazedTerracottaBlock() = default;

short YellowGlazedTerracottaBlock::getId() const {
  return 10271 + facing * 1;
}

std::shared_ptr<Block> YellowGlazedTerracottaBlock::clone() const {
  std::shared_ptr<YellowGlazedTerracottaBlock> copy = std::make_shared<YellowGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
