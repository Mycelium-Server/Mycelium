

#include "wet_sponge_block.h"

WetSpongeBlock::WetSpongeBlock() = default;
WetSpongeBlock::~WetSpongeBlock() = default;

short WetSpongeBlock::getId() const {
  return 459;
}

std::shared_ptr<Block> WetSpongeBlock::clone() const {
  std::shared_ptr<WetSpongeBlock> copy = std::make_shared<WetSpongeBlock>();
  return copy;
}
