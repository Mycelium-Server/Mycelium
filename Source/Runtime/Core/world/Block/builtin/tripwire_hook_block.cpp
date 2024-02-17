

#include "tripwire_hook_block.h"

TripwireHookBlock::TripwireHookBlock() = default;
TripwireHookBlock::~TripwireHookBlock() = default;

short TripwireHookBlock::getId() const {
  return 5851 + powered * 1 + facing * 2 + attached * 8;
}

std::shared_ptr<Block> TripwireHookBlock::clone() const {
  std::shared_ptr<TripwireHookBlock> copy = std::make_shared<TripwireHookBlock>();
  copy->attached = attached;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
