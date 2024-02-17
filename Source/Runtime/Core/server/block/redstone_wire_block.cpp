

#include "redstone_wire_block.h"

RedstoneWireBlock::RedstoneWireBlock() = default;
RedstoneWireBlock::~RedstoneWireBlock() = default;

short RedstoneWireBlock::getId() const {
  return 2312 + west * 1 + south * 3 + power * 9 + north * 144 + east * 432;
}

std::shared_ptr<Block> RedstoneWireBlock::clone() const {
  std::shared_ptr<RedstoneWireBlock> copy = std::make_shared<RedstoneWireBlock>();
  copy->east = east;
  copy->north = north;
  copy->power = power;
  copy->south = south;
  copy->west = west;
  return copy;
}
