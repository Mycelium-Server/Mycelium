

#include "respawn_anchor_block.h"

RespawnAnchorBlock::RespawnAnchorBlock() = default;
RespawnAnchorBlock::~RespawnAnchorBlock() = default;

short RespawnAnchorBlock::getId() const {
  return 17038 + charges * 1;
}

std::shared_ptr<Block> RespawnAnchorBlock::clone() const {
  std::shared_ptr<RespawnAnchorBlock> copy = std::make_shared<RespawnAnchorBlock>();
  copy->charges = charges;
  return copy;
}
