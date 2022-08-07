#include "command_block_block.h"

CommandBlockBlock::CommandBlockBlock() = default;
CommandBlockBlock::~CommandBlockBlock() = default;

short CommandBlockBlock::getId() const {
  if (conditional == CONDITIONAL_TRUE && facing == FACING_NORTH) return 6236;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_EAST) return 6237;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_SOUTH) return 6238;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_WEST) return 6239;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_UP) return 6240;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_DOWN) return 6241;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_NORTH) return 6242;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_EAST) return 6243;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_SOUTH) return 6244;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_WEST) return 6245;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_UP) return 6246;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_DOWN) return 6247;
  return 6242;
}
