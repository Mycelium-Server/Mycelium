

#include "brown_bed_block.h"

BrownBedBlock::BrownBedBlock() = default;
BrownBedBlock::~BrownBedBlock() = default;

short BrownBedBlock::getId() const {
  return 1471 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> BrownBedBlock::clone() const {
  std::shared_ptr<BrownBedBlock> copy = std::make_shared<BrownBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
