

#include "redstone_lamp_block.h"

RedstoneLampBlock::RedstoneLampBlock() = default;
RedstoneLampBlock::~RedstoneLampBlock() = default;

short RedstoneLampBlock::getId() const {
  return 5747 + lit * 1;
}

std::shared_ptr<Block> RedstoneLampBlock::clone() const {
  std::shared_ptr<RedstoneLampBlock> copy = std::make_shared<RedstoneLampBlock>();
  copy->lit = lit;
  return copy;
}
