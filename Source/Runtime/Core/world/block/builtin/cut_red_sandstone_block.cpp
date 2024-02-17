

#include "cut_red_sandstone_block.h"

CutRedSandstoneBlock::CutRedSandstoneBlock() = default;
CutRedSandstoneBlock::~CutRedSandstoneBlock() = default;

short CutRedSandstoneBlock::getId() const {
  return 8960;
}

std::shared_ptr<Block> CutRedSandstoneBlock::clone() const {
  std::shared_ptr<CutRedSandstoneBlock> copy = std::make_shared<CutRedSandstoneBlock>();
  return copy;
}
