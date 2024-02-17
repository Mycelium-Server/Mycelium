

#include "loom_block.h"

LoomBlock::LoomBlock() = default;
LoomBlock::~LoomBlock() = default;

short LoomBlock::getId() const {
  return 15992 + facing * 1;
}

std::shared_ptr<Block> LoomBlock::clone() const {
  std::shared_ptr<LoomBlock> copy = std::make_shared<LoomBlock>();
  copy->facing = facing;
  return copy;
}
