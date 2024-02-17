

#include "dried_kelp_block_block.h"

DriedKelpBlockBlock::DriedKelpBlockBlock() = default;
DriedKelpBlockBlock::~DriedKelpBlockBlock() = default;

short DriedKelpBlockBlock::getId() const {
  return 10378;
}

std::shared_ptr<Block> DriedKelpBlockBlock::clone() const {
  std::shared_ptr<DriedKelpBlockBlock> copy = std::make_shared<DriedKelpBlockBlock>();
  return copy;
}
