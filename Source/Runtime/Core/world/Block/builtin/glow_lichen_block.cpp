

#include "glow_lichen_block.h"

GlowLichenBlock::GlowLichenBlock() = default;
GlowLichenBlock::~GlowLichenBlock() = default;

short GlowLichenBlock::getId() const {
  return 5199 + west * 1 + waterlogged * 2 + up * 4 + south * 8 + north * 16 + east * 32 + down * 64;
}

std::shared_ptr<Block> GlowLichenBlock::clone() const {
  std::shared_ptr<GlowLichenBlock> copy = std::make_shared<GlowLichenBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
