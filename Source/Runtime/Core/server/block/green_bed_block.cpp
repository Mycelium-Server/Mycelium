

#include "green_bed_block.h"

GreenBedBlock::GreenBedBlock() = default;
GreenBedBlock::~GreenBedBlock() = default;

short GreenBedBlock::getId() const {
  return 1487 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> GreenBedBlock::clone() const {
  std::shared_ptr<GreenBedBlock> copy = std::make_shared<GreenBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
