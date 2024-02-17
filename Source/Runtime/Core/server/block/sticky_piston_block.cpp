

#include "sticky_piston_block.h"

StickyPistonBlock::StickyPistonBlock() = default;
StickyPistonBlock::~StickyPistonBlock() = default;

short StickyPistonBlock::getId() const {
  return 1583 + facing * 1 + extended * 6;
}

std::shared_ptr<Block> StickyPistonBlock::clone() const {
  std::shared_ptr<StickyPistonBlock> copy = std::make_shared<StickyPistonBlock>();
  copy->extended = extended;
  copy->facing = facing;
  return copy;
}
