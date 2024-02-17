

#include "piston_block.h"

PistonBlock::PistonBlock() = default;
PistonBlock::~PistonBlock() = default;

short PistonBlock::getId() const {
  return 1602 + facing * 1 + extended * 6;
}

std::shared_ptr<Block> PistonBlock::clone() const {
  std::shared_ptr<PistonBlock> copy = std::make_shared<PistonBlock>();
  copy->extended = extended;
  copy->facing = facing;
  return copy;
}
