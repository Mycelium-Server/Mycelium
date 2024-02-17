

#include "dragon_head_block.h"

DragonHeadBlock::DragonHeadBlock() = default;
DragonHeadBlock::~DragonHeadBlock() = default;

short DragonHeadBlock::getId() const {
  return 7207 + rotation * 1;
}

std::shared_ptr<Block> DragonHeadBlock::clone() const {
  std::shared_ptr<DragonHeadBlock> copy = std::make_shared<DragonHeadBlock>();
  copy->rotation = rotation;
  return copy;
}
