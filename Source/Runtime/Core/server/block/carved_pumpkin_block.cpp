

#include "carved_pumpkin_block.h"

CarvedPumpkinBlock::CarvedPumpkinBlock() = default;
CarvedPumpkinBlock::~CarvedPumpkinBlock() = default;

short CarvedPumpkinBlock::getId() const {
  return 4325 + facing * 1;
}

std::shared_ptr<Block> CarvedPumpkinBlock::clone() const {
  std::shared_ptr<CarvedPumpkinBlock> copy = std::make_shared<CarvedPumpkinBlock>();
  copy->facing = facing;
  return copy;
}
