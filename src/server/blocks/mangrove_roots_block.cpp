#include "mangrove_roots_block.h"

MangroveRootsBlock::MangroveRootsBlock() = default;
MangroveRootsBlock::~MangroveRootsBlock() = default;

short MangroveRootsBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 138;
  if (waterlogged == WATERLOGGED_FALSE) return 139;
  return 139;
}
