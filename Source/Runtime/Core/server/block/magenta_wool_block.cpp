

#include "magenta_wool_block.h"

MagentaWoolBlock::MagentaWoolBlock() = default;
MagentaWoolBlock::~MagentaWoolBlock() = default;

short MagentaWoolBlock::getId() const {
  return 1640;
}

std::shared_ptr<Block> MagentaWoolBlock::clone() const {
  std::shared_ptr<MagentaWoolBlock> copy = std::make_shared<MagentaWoolBlock>();
  return copy;
}
