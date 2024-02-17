

#include "water_block.h"

WaterBlock::WaterBlock() = default;
WaterBlock::~WaterBlock() = default;

short WaterBlock::getId() const {
  return 75 + level * 1;
}

std::shared_ptr<Block> WaterBlock::clone() const {
  std::shared_ptr<WaterBlock> copy = std::make_shared<WaterBlock>();
  copy->level = level;
  return copy;
}
