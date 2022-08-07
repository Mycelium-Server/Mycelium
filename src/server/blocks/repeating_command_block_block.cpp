#include "repeating_command_block_block.h"

RepeatingCommandBlockBlock::RepeatingCommandBlockBlock() = default;
RepeatingCommandBlockBlock::~RepeatingCommandBlockBlock() = default;

short RepeatingCommandBlockBlock::getId() const {
  if (conditional == CONDITIONAL_TRUE && facing == FACING_NORTH) return 10106;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_EAST) return 10107;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_SOUTH) return 10108;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_WEST) return 10109;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_UP) return 10110;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_DOWN) return 10111;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_NORTH) return 10112;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_EAST) return 10113;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_SOUTH) return 10114;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_WEST) return 10115;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_UP) return 10116;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_DOWN) return 10117;
  return 10112;
}
