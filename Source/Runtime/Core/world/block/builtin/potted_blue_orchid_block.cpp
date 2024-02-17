

#include "potted_blue_orchid_block.h"

PottedBlueOrchidBlock::PottedBlueOrchidBlock() = default;
PottedBlueOrchidBlock::~PottedBlueOrchidBlock() = default;

short PottedBlueOrchidBlock::getId() const {
  return 6908;
}

std::shared_ptr<Block> PottedBlueOrchidBlock::clone() const {
  std::shared_ptr<PottedBlueOrchidBlock> copy = std::make_shared<PottedBlueOrchidBlock>();
  return copy;
}
