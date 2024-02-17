

#include "packed_mud_block.h"

PackedMudBlock::PackedMudBlock() = default;
PackedMudBlock::~PackedMudBlock() = default;

short PackedMudBlock::getId() const {
  return 4872;
}

std::shared_ptr<Block> PackedMudBlock::clone() const {
  std::shared_ptr<PackedMudBlock> copy = std::make_shared<PackedMudBlock>();
  return copy;
}
