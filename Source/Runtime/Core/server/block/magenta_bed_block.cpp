

#include "magenta_bed_block.h"

MagentaBedBlock::MagentaBedBlock() = default;
MagentaBedBlock::~MagentaBedBlock() = default;

short MagentaBedBlock::getId() const {
  return 1311 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> MagentaBedBlock::clone() const {
  std::shared_ptr<MagentaBedBlock> copy = std::make_shared<MagentaBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
