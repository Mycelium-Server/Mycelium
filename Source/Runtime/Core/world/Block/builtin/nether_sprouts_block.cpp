

#include "nether_sprouts_block.h"

NetherSproutsBlock::NetherSproutsBlock() = default;
NetherSproutsBlock::~NetherSproutsBlock() = default;

short NetherSproutsBlock::getId() const {
  return 16183;
}

std::shared_ptr<Block> NetherSproutsBlock::clone() const {
  std::shared_ptr<NetherSproutsBlock> copy = std::make_shared<NetherSproutsBlock>();
  return copy;
}
