

#include "purple_stained_glass_block.h"

PurpleStainedGlassBlock::PurpleStainedGlassBlock() = default;
PurpleStainedGlassBlock::~PurpleStainedGlassBlock() = default;

short PurpleStainedGlassBlock::getId() const {
  return 4414;
}

std::shared_ptr<Block> PurpleStainedGlassBlock::clone() const {
  std::shared_ptr<PurpleStainedGlassBlock> copy = std::make_shared<PurpleStainedGlassBlock>();
  return copy;
}
