

#include "orange_bed_block.h"

OrangeBedBlock::OrangeBedBlock() = default;
OrangeBedBlock::~OrangeBedBlock() = default;

short OrangeBedBlock::getId() const {
  return 1295 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> OrangeBedBlock::clone() const {
  std::shared_ptr<OrangeBedBlock> copy = std::make_shared<OrangeBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
