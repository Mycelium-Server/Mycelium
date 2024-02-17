

#include "nether_wart_block.h"

NetherWartBlock::NetherWartBlock() = default;
NetherWartBlock::~NetherWartBlock() = default;

short NetherWartBlock::getId() const {
  return 5715 + age * 1;
}

std::shared_ptr<Block> NetherWartBlock::clone() const {
  std::shared_ptr<NetherWartBlock> copy = std::make_shared<NetherWartBlock>();
  copy->age = age;
  return copy;
}
