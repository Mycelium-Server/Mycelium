

#include "red_bed_block.h"

RedBedBlock::RedBedBlock() = default;
RedBedBlock::~RedBedBlock() = default;

short RedBedBlock::getId() const {
  return 1503 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> RedBedBlock::clone() const {
  std::shared_ptr<RedBedBlock> copy = std::make_shared<RedBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
