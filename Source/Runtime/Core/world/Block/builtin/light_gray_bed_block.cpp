

#include "light_gray_bed_block.h"

LightGrayBedBlock::LightGrayBedBlock() = default;
LightGrayBedBlock::~LightGrayBedBlock() = default;

short LightGrayBedBlock::getId() const {
  return 1407 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> LightGrayBedBlock::clone() const {
  std::shared_ptr<LightGrayBedBlock> copy = std::make_shared<LightGrayBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
