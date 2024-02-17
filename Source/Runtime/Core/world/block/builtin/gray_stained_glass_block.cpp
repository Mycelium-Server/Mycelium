

#include "gray_stained_glass_block.h"

GrayStainedGlassBlock::GrayStainedGlassBlock() = default;
GrayStainedGlassBlock::~GrayStainedGlassBlock() = default;

short GrayStainedGlassBlock::getId() const {
  return 4411;
}

std::shared_ptr<Block> GrayStainedGlassBlock::clone() const {
  std::shared_ptr<GrayStainedGlassBlock> copy = std::make_shared<GrayStainedGlassBlock>();
  return copy;
}
