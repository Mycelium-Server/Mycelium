

#include "nether_quartz_ore_block.h"

NetherQuartzOreBlock::NetherQuartzOreBlock() = default;
NetherQuartzOreBlock::~NetherQuartzOreBlock() = default;

short NetherQuartzOreBlock::getId() const {
  return 7344;
}

std::shared_ptr<Block> NetherQuartzOreBlock::clone() const {
  std::shared_ptr<NetherQuartzOreBlock> copy = std::make_shared<NetherQuartzOreBlock>();
  return copy;
}
