#include "redstone_lamp_block.h"

RedstoneLampBlock::RedstoneLampBlock() = default;
RedstoneLampBlock::~RedstoneLampBlock() = default;

short RedstoneLampBlock::getId() const {
  if (lit == LIT_TRUE) return 5747;
  if (lit == LIT_FALSE) return 5748;
  return 5748;
}
