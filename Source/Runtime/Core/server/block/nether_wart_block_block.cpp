

#include "nether_wart_block_block.h"

NetherWartBlockBlock::NetherWartBlockBlock() = default;
NetherWartBlockBlock::~NetherWartBlockBlock() = default;

short NetherWartBlockBlock::getId() const {
  return 10135;
}

std::shared_ptr<Block> NetherWartBlockBlock::clone() const {
  std::shared_ptr<NetherWartBlockBlock> copy = std::make_shared<NetherWartBlockBlock>();
  return copy;
}
