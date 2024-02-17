

#include "purple_bed_block.h"

PurpleBedBlock::PurpleBedBlock() = default;
PurpleBedBlock::~PurpleBedBlock() = default;

short PurpleBedBlock::getId() const {
  return 1439 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> PurpleBedBlock::clone() const {
  std::shared_ptr<PurpleBedBlock> copy = std::make_shared<PurpleBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
