

#include "pink_bed_block.h"

PinkBedBlock::PinkBedBlock() = default;
PinkBedBlock::~PinkBedBlock() = default;

short PinkBedBlock::getId() const {
  return 1375 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> PinkBedBlock::clone() const {
  std::shared_ptr<PinkBedBlock> copy = std::make_shared<PinkBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
