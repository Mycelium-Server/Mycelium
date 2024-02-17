

#include "glass_block.h"

GlassBlock::GlassBlock() = default;
GlassBlock::~GlassBlock() = default;

short GlassBlock::getId() const {
  return 460;
}

std::shared_ptr<Block> GlassBlock::clone() const {
  std::shared_ptr<GlassBlock> copy = std::make_shared<GlassBlock>();
  return copy;
}
