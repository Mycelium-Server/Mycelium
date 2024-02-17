

#include "mud_block.h"

MudBlock::MudBlock() = default;
MudBlock::~MudBlock() = default;

short MudBlock::getId() const {
  return 19777;
}

std::shared_ptr<Block> MudBlock::clone() const {
  std::shared_ptr<MudBlock> copy = std::make_shared<MudBlock>();
  return copy;
}
