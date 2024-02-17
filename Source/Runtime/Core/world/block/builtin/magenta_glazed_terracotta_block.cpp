

#include "magenta_glazed_terracotta_block.h"

MagentaGlazedTerracottaBlock::MagentaGlazedTerracottaBlock() = default;
MagentaGlazedTerracottaBlock::~MagentaGlazedTerracottaBlock() = default;

short MagentaGlazedTerracottaBlock::getId() const {
  return 10263 + facing * 1;
}

std::shared_ptr<Block> MagentaGlazedTerracottaBlock::clone() const {
  std::shared_ptr<MagentaGlazedTerracottaBlock> copy = std::make_shared<MagentaGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
