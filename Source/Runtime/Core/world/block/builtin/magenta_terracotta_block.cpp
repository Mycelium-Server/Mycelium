

#include "magenta_terracotta_block.h"

MagentaTerracottaBlock::MagentaTerracottaBlock() = default;
MagentaTerracottaBlock::~MagentaTerracottaBlock() = default;

short MagentaTerracottaBlock::getId() const {
  return 7478;
}

std::shared_ptr<Block> MagentaTerracottaBlock::clone() const {
  std::shared_ptr<MagentaTerracottaBlock> copy = std::make_shared<MagentaTerracottaBlock>();
  return copy;
}
