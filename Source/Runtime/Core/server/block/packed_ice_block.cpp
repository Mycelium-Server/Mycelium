

#include "packed_ice_block.h"

PackedIceBlock::PackedIceBlock() = default;
PackedIceBlock::~PackedIceBlock() = default;

short PackedIceBlock::getId() const {
  return 8625;
}

std::shared_ptr<Block> PackedIceBlock::clone() const {
  std::shared_ptr<PackedIceBlock> copy = std::make_shared<PackedIceBlock>();
  return copy;
}
