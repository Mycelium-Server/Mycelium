

#include "nether_bricks_block.h"

NetherBricksBlock::NetherBricksBlock() = default;
NetherBricksBlock::~NetherBricksBlock() = default;

short NetherBricksBlock::getId() const {
  return 5602;
}

std::shared_ptr<Block> NetherBricksBlock::clone() const {
  std::shared_ptr<NetherBricksBlock> copy = std::make_shared<NetherBricksBlock>();
  return copy;
}
