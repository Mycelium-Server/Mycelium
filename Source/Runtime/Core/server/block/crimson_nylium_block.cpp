

#include "crimson_nylium_block.h"

CrimsonNyliumBlock::CrimsonNyliumBlock() = default;
CrimsonNyliumBlock::~CrimsonNyliumBlock() = default;

short CrimsonNyliumBlock::getId() const {
  return 16196;
}

std::shared_ptr<Block> CrimsonNyliumBlock::clone() const {
  std::shared_ptr<CrimsonNyliumBlock> copy = std::make_shared<CrimsonNyliumBlock>();
  return copy;
}
