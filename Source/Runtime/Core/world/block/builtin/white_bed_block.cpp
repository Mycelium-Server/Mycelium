

#include "white_bed_block.h"

WhiteBedBlock::WhiteBedBlock() = default;
WhiteBedBlock::~WhiteBedBlock() = default;

short WhiteBedBlock::getId() const {
  return 1279 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> WhiteBedBlock::clone() const {
  std::shared_ptr<WhiteBedBlock> copy = std::make_shared<WhiteBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
