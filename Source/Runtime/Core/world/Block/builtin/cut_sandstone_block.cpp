

#include "cut_sandstone_block.h"

CutSandstoneBlock::CutSandstoneBlock() = default;
CutSandstoneBlock::~CutSandstoneBlock() = default;

short CutSandstoneBlock::getId() const {
  return 478;
}

std::shared_ptr<Block> CutSandstoneBlock::clone() const {
  std::shared_ptr<CutSandstoneBlock> copy = std::make_shared<CutSandstoneBlock>();
  return copy;
}
