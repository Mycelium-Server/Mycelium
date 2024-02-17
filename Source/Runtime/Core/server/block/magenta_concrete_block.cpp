

#include "magenta_concrete_block.h"

MagentaConcreteBlock::MagentaConcreteBlock() = default;
MagentaConcreteBlock::~MagentaConcreteBlock() = default;

short MagentaConcreteBlock::getId() const {
  return 10321;
}

std::shared_ptr<Block> MagentaConcreteBlock::clone() const {
  std::shared_ptr<MagentaConcreteBlock> copy = std::make_shared<MagentaConcreteBlock>();
  return copy;
}
