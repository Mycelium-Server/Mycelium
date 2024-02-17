

#include "player_wall_head_block.h"

PlayerWallHeadBlock::PlayerWallHeadBlock() = default;
PlayerWallHeadBlock::~PlayerWallHeadBlock() = default;

short PlayerWallHeadBlock::getId() const {
  return 7183 + facing * 1;
}

std::shared_ptr<Block> PlayerWallHeadBlock::clone() const {
  std::shared_ptr<PlayerWallHeadBlock> copy = std::make_shared<PlayerWallHeadBlock>();
  copy->facing = facing;
  return copy;
}
