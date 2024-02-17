

#include "light_blue_glazed_terracotta_block.h"

LightBlueGlazedTerracottaBlock::LightBlueGlazedTerracottaBlock() = default;
LightBlueGlazedTerracottaBlock::~LightBlueGlazedTerracottaBlock() = default;

short LightBlueGlazedTerracottaBlock::getId() const {
  return 10267 + facing * 1;
}

std::shared_ptr<Block> LightBlueGlazedTerracottaBlock::clone() const {
  std::shared_ptr<LightBlueGlazedTerracottaBlock> copy = std::make_shared<LightBlueGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
