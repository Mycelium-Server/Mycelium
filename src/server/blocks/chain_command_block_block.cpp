#include "chain_command_block_block.h"

ChainCommandBlockBlock::ChainCommandBlockBlock() = default;
ChainCommandBlockBlock::~ChainCommandBlockBlock() = default;

short ChainCommandBlockBlock::getId() const {
  if (conditional == CONDITIONAL_TRUE && facing == FACING_NORTH) return 10118;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_EAST) return 10119;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_SOUTH) return 10120;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_WEST) return 10121;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_UP) return 10122;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_DOWN) return 10123;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_NORTH) return 10124;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_EAST) return 10125;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_SOUTH) return 10126;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_WEST) return 10127;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_UP) return 10128;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_DOWN) return 10129;
  return 10124;
}
