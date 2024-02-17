

#include "warped_nylium_block.h"

WarpedNyliumBlock::WarpedNyliumBlock() = default;
WarpedNyliumBlock::~WarpedNyliumBlock() = default;

short WarpedNyliumBlock::getId() const {
  return 16179;
}

std::shared_ptr<Block> WarpedNyliumBlock::clone() const {
  std::shared_ptr<WarpedNyliumBlock> copy = std::make_shared<WarpedNyliumBlock>();
  return copy;
}
