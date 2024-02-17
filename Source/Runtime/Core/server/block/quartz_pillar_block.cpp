

#include "quartz_pillar_block.h"

QuartzPillarBlock::QuartzPillarBlock() = default;
QuartzPillarBlock::~QuartzPillarBlock() = default;

short QuartzPillarBlock::getId() const {
  return 7357 + axis * 1;
}

std::shared_ptr<Block> QuartzPillarBlock::clone() const {
  std::shared_ptr<QuartzPillarBlock> copy = std::make_shared<QuartzPillarBlock>();
  copy->axis = axis;
  return copy;
}
