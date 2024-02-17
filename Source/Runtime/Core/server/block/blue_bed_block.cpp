

#include "blue_bed_block.h"

BlueBedBlock::BlueBedBlock() = default;
BlueBedBlock::~BlueBedBlock() = default;

short BlueBedBlock::getId() const {
  return 1455 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> BlueBedBlock::clone() const {
  std::shared_ptr<BlueBedBlock> copy = std::make_shared<BlueBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
