

#include "flower_pot_block.h"

FlowerPotBlock::FlowerPotBlock() = default;
FlowerPotBlock::~FlowerPotBlock() = default;

short FlowerPotBlock::getId() const {
  return 6897;
}

std::shared_ptr<Block> FlowerPotBlock::clone() const {
  std::shared_ptr<FlowerPotBlock> copy = std::make_shared<FlowerPotBlock>();
  return copy;
}
