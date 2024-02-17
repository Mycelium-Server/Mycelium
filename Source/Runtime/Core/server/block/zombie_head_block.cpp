

#include "zombie_head_block.h"

ZombieHeadBlock::ZombieHeadBlock() = default;
ZombieHeadBlock::~ZombieHeadBlock() = default;

short ZombieHeadBlock::getId() const {
  return 7147 + rotation * 1;
}

std::shared_ptr<Block> ZombieHeadBlock::clone() const {
  std::shared_ptr<ZombieHeadBlock> copy = std::make_shared<ZombieHeadBlock>();
  copy->rotation = rotation;
  return copy;
}
