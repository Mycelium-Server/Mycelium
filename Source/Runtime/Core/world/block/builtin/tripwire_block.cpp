

#include "tripwire_block.h"

TripwireBlock::TripwireBlock() = default;
TripwireBlock::~TripwireBlock() = default;

short TripwireBlock::getId() const {
  return 5867 + west * 1 + south * 2 + powered * 4 + north * 8 + east * 16 + disarmed * 32 + attached * 64;
}

std::shared_ptr<Block> TripwireBlock::clone() const {
  std::shared_ptr<TripwireBlock> copy = std::make_shared<TripwireBlock>();
  copy->attached = attached;
  copy->disarmed = disarmed;
  copy->east = east;
  copy->north = north;
  copy->powered = powered;
  copy->south = south;
  copy->west = west;
  return copy;
}
