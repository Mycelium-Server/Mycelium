

#include "light_blue_bed_block.h"

LightBlueBedBlock::LightBlueBedBlock() = default;
LightBlueBedBlock::~LightBlueBedBlock() = default;

short LightBlueBedBlock::getId() const {
  return 1327 + part * 1 + occupied * 2 + facing * 4;
}

std::shared_ptr<Block> LightBlueBedBlock::clone() const {
  std::shared_ptr<LightBlueBedBlock> copy = std::make_shared<LightBlueBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
