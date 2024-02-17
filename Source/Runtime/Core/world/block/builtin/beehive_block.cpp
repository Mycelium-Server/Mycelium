

#include "beehive_block.h"

BeehiveBlock::BeehiveBlock() = default;
BeehiveBlock::~BeehiveBlock() = default;

short BeehiveBlock::getId() const {
  return 17009 + honey_level * 1 + facing * 6;
}

std::shared_ptr<Block> BeehiveBlock::clone() const {
  std::shared_ptr<BeehiveBlock> copy = std::make_shared<BeehiveBlock>();
  copy->facing = facing;
  copy->honey_level = honey_level;
  return copy;
}
