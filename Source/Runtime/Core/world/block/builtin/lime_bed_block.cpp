

#include "lime_bed_block.h"

LimeBedBlock::LimeBedBlock() = default;
LimeBedBlock::~LimeBedBlock() = default;

short LimeBedBlock::getId() const {
  return 1359 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> LimeBedBlock::clone() const {
  std::shared_ptr<LimeBedBlock> copy = std::make_shared<LimeBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
