

#include "gray_glazed_terracotta_block.h"

GrayGlazedTerracottaBlock::GrayGlazedTerracottaBlock() = default;
GrayGlazedTerracottaBlock::~GrayGlazedTerracottaBlock() = default;

short GrayGlazedTerracottaBlock::getId() const {
  return 10283 + facing * 1;
}

std::shared_ptr<Block> GrayGlazedTerracottaBlock::clone() const {
  std::shared_ptr<GrayGlazedTerracottaBlock> copy = std::make_shared<GrayGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
