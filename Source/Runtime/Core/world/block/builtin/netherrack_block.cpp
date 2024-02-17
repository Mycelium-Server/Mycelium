

#include "netherrack_block.h"

NetherrackBlock::NetherrackBlock() = default;
NetherrackBlock::~NetherrackBlock() = default;

short NetherrackBlock::getId() const {
  return 4308;
}

std::shared_ptr<Block> NetherrackBlock::clone() const {
  std::shared_ptr<NetherrackBlock> copy = std::make_shared<NetherrackBlock>();
  return copy;
}
