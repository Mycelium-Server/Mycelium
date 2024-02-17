

#include "blue_glazed_terracotta_block.h"

BlueGlazedTerracottaBlock::BlueGlazedTerracottaBlock() = default;
BlueGlazedTerracottaBlock::~BlueGlazedTerracottaBlock() = default;

short BlueGlazedTerracottaBlock::getId() const {
  return 10299 + facing * 1;
}

std::shared_ptr<Block> BlueGlazedTerracottaBlock::clone() const {
  std::shared_ptr<BlueGlazedTerracottaBlock> copy = std::make_shared<BlueGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
