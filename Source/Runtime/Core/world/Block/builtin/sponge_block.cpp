

#include "sponge_block.h"

SpongeBlock::SpongeBlock() = default;
SpongeBlock::~SpongeBlock() = default;

short SpongeBlock::getId() const {
  return 458;
}

std::shared_ptr<Block> SpongeBlock::clone() const {
  std::shared_ptr<SpongeBlock> copy = std::make_shared<SpongeBlock>();
  return copy;
}
