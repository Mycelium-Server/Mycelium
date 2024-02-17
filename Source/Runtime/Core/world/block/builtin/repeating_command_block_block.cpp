

#include "repeating_command_block_block.h"

RepeatingCommandBlockBlock::RepeatingCommandBlockBlock() = default;
RepeatingCommandBlockBlock::~RepeatingCommandBlockBlock() = default;

short RepeatingCommandBlockBlock::getId() const {
  return 10106 + facing * 1 + conditional * 6;
}

std::shared_ptr<Block> RepeatingCommandBlockBlock::clone() const {
  std::shared_ptr<RepeatingCommandBlockBlock> copy = std::make_shared<RepeatingCommandBlockBlock>();
  copy->conditional = conditional;
  copy->facing = facing;
  return copy;
}
