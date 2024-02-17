

#include "jack_o_lantern_block.h"

JackOLanternBlock::JackOLanternBlock() = default;
JackOLanternBlock::~JackOLanternBlock() = default;

short JackOLanternBlock::getId() const {
  return 4329 + facing * 1;
}

std::shared_ptr<Block> JackOLanternBlock::clone() const {
  std::shared_ptr<JackOLanternBlock> copy = std::make_shared<JackOLanternBlock>();
  copy->facing = facing;
  return copy;
}
