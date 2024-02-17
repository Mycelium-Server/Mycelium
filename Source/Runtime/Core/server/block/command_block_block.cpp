

#include "command_block_block.h"

CommandBlockBlock::CommandBlockBlock() = default;
CommandBlockBlock::~CommandBlockBlock() = default;

short CommandBlockBlock::getId() const {
  return 6236 + facing * 1 + conditional * 6;
}

std::shared_ptr<Block> CommandBlockBlock::clone() const {
  std::shared_ptr<CommandBlockBlock> copy = std::make_shared<CommandBlockBlock>();
  copy->conditional = conditional;
  copy->facing = facing;
  return copy;
}
