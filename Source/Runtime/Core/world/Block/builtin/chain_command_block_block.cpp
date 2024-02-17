

#include "chain_command_block_block.h"

ChainCommandBlockBlock::ChainCommandBlockBlock() = default;
ChainCommandBlockBlock::~ChainCommandBlockBlock() = default;

short ChainCommandBlockBlock::getId() const {
  return 10118 + facing * 1 + conditional * 6;
}

std::shared_ptr<Block> ChainCommandBlockBlock::clone() const {
  std::shared_ptr<ChainCommandBlockBlock> copy = std::make_shared<ChainCommandBlockBlock>();
  copy->conditional = conditional;
  copy->facing = facing;
  return copy;
}
