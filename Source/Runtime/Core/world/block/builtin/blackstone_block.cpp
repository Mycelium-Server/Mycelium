

#include "blackstone_block.h"

BlackstoneBlock::BlackstoneBlock() = default;
BlackstoneBlock::~BlackstoneBlock() = default;

short BlackstoneBlock::getId() const {
  return 17048;
}

std::shared_ptr<Block> BlackstoneBlock::clone() const {
  std::shared_ptr<BlackstoneBlock> copy = std::make_shared<BlackstoneBlock>();
  return copy;
}
