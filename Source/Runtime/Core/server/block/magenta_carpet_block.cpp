

#include "magenta_carpet_block.h"

MagentaCarpetBlock::MagentaCarpetBlock() = default;
MagentaCarpetBlock::~MagentaCarpetBlock() = default;

short MagentaCarpetBlock::getId() const {
  return 8609;
}

std::shared_ptr<Block> MagentaCarpetBlock::clone() const {
  std::shared_ptr<MagentaCarpetBlock> copy = std::make_shared<MagentaCarpetBlock>();
  return copy;
}
