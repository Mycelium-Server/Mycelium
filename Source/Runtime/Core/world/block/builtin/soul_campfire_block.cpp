

#include "soul_campfire_block.h"

SoulCampfireBlock::SoulCampfireBlock() = default;
SoulCampfireBlock::~SoulCampfireBlock() = default;

short SoulCampfireBlock::getId() const {
  return 16131 + waterlogged * 1 + signal_fire * 2 + lit * 4 + facing * 8;
}

std::shared_ptr<Block> SoulCampfireBlock::clone() const {
  std::shared_ptr<SoulCampfireBlock> copy = std::make_shared<SoulCampfireBlock>();
  copy->facing = facing;
  copy->lit = lit;
  copy->signal_fire = signal_fire;
  copy->waterlogged = waterlogged;
  return copy;
}
