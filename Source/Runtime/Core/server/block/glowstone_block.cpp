

#include "glowstone_block.h"

GlowstoneBlock::GlowstoneBlock() = default;
GlowstoneBlock::~GlowstoneBlock() = default;

short GlowstoneBlock::getId() const {
  return 4322;
}

std::shared_ptr<Block> GlowstoneBlock::clone() const {
  std::shared_ptr<GlowstoneBlock> copy = std::make_shared<GlowstoneBlock>();
  return copy;
}
