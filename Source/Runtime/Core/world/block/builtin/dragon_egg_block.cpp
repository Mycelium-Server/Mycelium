

#include "dragon_egg_block.h"

DragonEggBlock::DragonEggBlock() = default;
DragonEggBlock::~DragonEggBlock() = default;

short DragonEggBlock::getId() const {
  return 5746;
}

std::shared_ptr<Block> DragonEggBlock::clone() const {
  std::shared_ptr<DragonEggBlock> copy = std::make_shared<DragonEggBlock>();
  return copy;
}
