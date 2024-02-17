

#include "netherite_block_block.h"

NetheriteBlockBlock::NetheriteBlockBlock() = default;
NetheriteBlockBlock::~NetheriteBlockBlock() = default;

short NetheriteBlockBlock::getId() const {
  return 17035;
}

std::shared_ptr<Block> NetheriteBlockBlock::clone() const {
  std::shared_ptr<NetheriteBlockBlock> copy = std::make_shared<NetheriteBlockBlock>();
  return copy;
}
