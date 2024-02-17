

#include "amethyst_block_block.h"

AmethystBlockBlock::AmethystBlockBlock() = default;
AmethystBlockBlock::~AmethystBlockBlock() = default;

short AmethystBlockBlock::getId() const {
  return 18619;
}

std::shared_ptr<Block> AmethystBlockBlock::clone() const {
  std::shared_ptr<AmethystBlockBlock> copy = std::make_shared<AmethystBlockBlock>();
  return copy;
}
