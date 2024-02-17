

#include "player_head_block.h"

PlayerHeadBlock::PlayerHeadBlock() = default;
PlayerHeadBlock::~PlayerHeadBlock() = default;

short PlayerHeadBlock::getId() const {
  return 7167 + rotation * 1;
}

std::shared_ptr<Block> PlayerHeadBlock::clone() const {
  std::shared_ptr<PlayerHeadBlock> copy = std::make_shared<PlayerHeadBlock>();
  copy->rotation = rotation;
  return copy;
}
