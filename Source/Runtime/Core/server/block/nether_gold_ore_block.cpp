

#include "nether_gold_ore_block.h"

NetherGoldOreBlock::NetherGoldOreBlock() = default;
NetherGoldOreBlock::~NetherGoldOreBlock() = default;

short NetherGoldOreBlock::getId() const {
  return 116;
}

std::shared_ptr<Block> NetherGoldOreBlock::clone() const {
  std::shared_ptr<NetherGoldOreBlock> copy = std::make_shared<NetherGoldOreBlock>();
  return copy;
}
