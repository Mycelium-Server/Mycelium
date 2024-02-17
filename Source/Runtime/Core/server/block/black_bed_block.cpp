

#include "black_bed_block.h"

BlackBedBlock::BlackBedBlock() = default;
BlackBedBlock::~BlackBedBlock() = default;

short BlackBedBlock::getId() const {
  return 1519 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> BlackBedBlock::clone() const {
  std::shared_ptr<BlackBedBlock> copy = std::make_shared<BlackBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
