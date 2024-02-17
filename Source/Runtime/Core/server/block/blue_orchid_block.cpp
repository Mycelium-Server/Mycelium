

#include "blue_orchid_block.h"

BlueOrchidBlock::BlueOrchidBlock() = default;
BlueOrchidBlock::~BlueOrchidBlock() = default;

short BlueOrchidBlock::getId() const {
  return 1668;
}

std::shared_ptr<Block> BlueOrchidBlock::clone() const {
  std::shared_ptr<BlueOrchidBlock> copy = std::make_shared<BlueOrchidBlock>();
  return copy;
}
