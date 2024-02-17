

#include "campfire_block.h"

CampfireBlock::CampfireBlock() = default;
CampfireBlock::~CampfireBlock() = default;

short CampfireBlock::getId() const {
  return 16099 + waterlogged * 1 + signal_fire * 2 + lit * 4 + facing * 8;
}

std::shared_ptr<Block> CampfireBlock::clone() const {
  std::shared_ptr<CampfireBlock> copy = std::make_shared<CampfireBlock>();
  copy->facing = facing;
  copy->lit = lit;
  copy->signal_fire = signal_fire;
  copy->waterlogged = waterlogged;
  return copy;
}
