

#include "gray_bed_block.h"

GrayBedBlock::GrayBedBlock() = default;
GrayBedBlock::~GrayBedBlock() = default;

short GrayBedBlock::getId() const {
  return 1391 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> GrayBedBlock::clone() const {
  std::shared_ptr<GrayBedBlock> copy = std::make_shared<GrayBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
