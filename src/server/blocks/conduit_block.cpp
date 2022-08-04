#include "conduit_block.h"

ConduitBlock::ConduitBlock() = default;
ConduitBlock::~ConduitBlock() = default;

short ConduitBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10530;
  if (waterlogged == WATERLOGGED_FALSE) return 10531;
  return 10530;
}
