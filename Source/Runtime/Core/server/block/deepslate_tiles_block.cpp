

#include "deepslate_tiles_block.h"

DeepslateTilesBlock::DeepslateTilesBlock() = default;
DeepslateTilesBlock::~DeepslateTilesBlock() = default;

short DeepslateTilesBlock::getId() const {
  return 20603;
}

std::shared_ptr<Block> DeepslateTilesBlock::clone() const {
  std::shared_ptr<DeepslateTilesBlock> copy = std::make_shared<DeepslateTilesBlock>();
  return copy;
}
