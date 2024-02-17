

#include "creeper_wall_head_block.h"

CreeperWallHeadBlock::CreeperWallHeadBlock() = default;
CreeperWallHeadBlock::~CreeperWallHeadBlock() = default;

short CreeperWallHeadBlock::getId() const {
  return 7203 + facing * 1;
}

std::shared_ptr<Block> CreeperWallHeadBlock::clone() const {
  std::shared_ptr<CreeperWallHeadBlock> copy = std::make_shared<CreeperWallHeadBlock>();
  copy->facing = facing;
  return copy;
}
