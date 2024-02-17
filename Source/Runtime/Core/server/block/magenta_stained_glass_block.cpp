

#include "magenta_stained_glass_block.h"

MagentaStainedGlassBlock::MagentaStainedGlassBlock() = default;
MagentaStainedGlassBlock::~MagentaStainedGlassBlock() = default;

short MagentaStainedGlassBlock::getId() const {
  return 4406;
}

std::shared_ptr<Block> MagentaStainedGlassBlock::clone() const {
  std::shared_ptr<MagentaStainedGlassBlock> copy = std::make_shared<MagentaStainedGlassBlock>();
  return copy;
}
