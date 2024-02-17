

#include "zombie_wall_head_block.h"

ZombieWallHeadBlock::ZombieWallHeadBlock() = default;
ZombieWallHeadBlock::~ZombieWallHeadBlock() = default;

short ZombieWallHeadBlock::getId() const {
  return 7163 + facing * 1;
}

std::shared_ptr<Block> ZombieWallHeadBlock::clone() const {
  std::shared_ptr<ZombieWallHeadBlock> copy = std::make_shared<ZombieWallHeadBlock>();
  copy->facing = facing;
  return copy;
}
