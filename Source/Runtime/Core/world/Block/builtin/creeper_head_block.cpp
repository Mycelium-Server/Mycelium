

#include "creeper_head_block.h"

CreeperHeadBlock::CreeperHeadBlock() = default;
CreeperHeadBlock::~CreeperHeadBlock() = default;

short CreeperHeadBlock::getId() const {
  return 7187 + rotation * 1;
}

std::shared_ptr<Block> CreeperHeadBlock::clone() const {
  std::shared_ptr<CreeperHeadBlock> copy = std::make_shared<CreeperHeadBlock>();
  copy->rotation = rotation;
  return copy;
}
