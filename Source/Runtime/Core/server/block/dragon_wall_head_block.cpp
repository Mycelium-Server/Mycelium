

#include "dragon_wall_head_block.h"

DragonWallHeadBlock::DragonWallHeadBlock() = default;
DragonWallHeadBlock::~DragonWallHeadBlock() = default;

short DragonWallHeadBlock::getId() const {
  return 7223 + facing * 1;
}

std::shared_ptr<Block> DragonWallHeadBlock::clone() const {
  std::shared_ptr<DragonWallHeadBlock> copy = std::make_shared<DragonWallHeadBlock>();
  copy->facing = facing;
  return copy;
}
