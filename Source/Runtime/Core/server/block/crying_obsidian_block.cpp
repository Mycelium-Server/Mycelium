

#include "crying_obsidian_block.h"

CryingObsidianBlock::CryingObsidianBlock() = default;
CryingObsidianBlock::~CryingObsidianBlock() = default;

short CryingObsidianBlock::getId() const {
  return 17037;
}

std::shared_ptr<Block> CryingObsidianBlock::clone() const {
  std::shared_ptr<CryingObsidianBlock> copy = std::make_shared<CryingObsidianBlock>();
  return copy;
}
