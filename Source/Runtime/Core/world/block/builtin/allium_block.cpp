

#include "allium_block.h"

AlliumBlock::AlliumBlock() = default;
AlliumBlock::~AlliumBlock() = default;

short AlliumBlock::getId() const {
  return 1669;
}

std::shared_ptr<Block> AlliumBlock::clone() const {
  std::shared_ptr<AlliumBlock> copy = std::make_shared<AlliumBlock>();
  return copy;
}
