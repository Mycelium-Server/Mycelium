

#include "beacon_block.h"

BeaconBlock::BeaconBlock() = default;
BeaconBlock::~BeaconBlock() = default;

short BeaconBlock::getId() const {
  return 6248;
}

std::shared_ptr<Block> BeaconBlock::clone() const {
  std::shared_ptr<BeaconBlock> copy = std::make_shared<BeaconBlock>();
  return copy;
}
