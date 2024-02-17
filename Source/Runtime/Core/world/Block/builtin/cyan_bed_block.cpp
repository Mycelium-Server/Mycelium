

#include "cyan_bed_block.h"

CyanBedBlock::CyanBedBlock() = default;
CyanBedBlock::~CyanBedBlock() = default;

short CyanBedBlock::getId() const {
  return 1423 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> CyanBedBlock::clone() const {
  std::shared_ptr<CyanBedBlock> copy = std::make_shared<CyanBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
