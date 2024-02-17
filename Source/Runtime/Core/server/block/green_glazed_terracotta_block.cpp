

#include "green_glazed_terracotta_block.h"

GreenGlazedTerracottaBlock::GreenGlazedTerracottaBlock() = default;
GreenGlazedTerracottaBlock::~GreenGlazedTerracottaBlock() = default;

short GreenGlazedTerracottaBlock::getId() const {
  return 10307 + facing * 1;
}

std::shared_ptr<Block> GreenGlazedTerracottaBlock::clone() const {
  std::shared_ptr<GreenGlazedTerracottaBlock> copy = std::make_shared<GreenGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
