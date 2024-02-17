

#include "obsidian_block.h"

ObsidianBlock::ObsidianBlock() = default;
ObsidianBlock::~ObsidianBlock() = default;

short ObsidianBlock::getId() const {
  return 1688;
}

std::shared_ptr<Block> ObsidianBlock::clone() const {
  std::shared_ptr<ObsidianBlock> copy = std::make_shared<ObsidianBlock>();
  return copy;
}
