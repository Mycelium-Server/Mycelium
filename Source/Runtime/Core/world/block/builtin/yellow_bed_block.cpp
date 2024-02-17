

#include "yellow_bed_block.h"

YellowBedBlock::YellowBedBlock() = default;
YellowBedBlock::~YellowBedBlock() = default;

short YellowBedBlock::getId() const {
  return 1343 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> YellowBedBlock::clone() const {
  std::shared_ptr<YellowBedBlock> copy = std::make_shared<YellowBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
