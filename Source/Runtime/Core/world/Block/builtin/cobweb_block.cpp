

#include "cobweb_block.h"

CobwebBlock::CobwebBlock() = default;
CobwebBlock::~CobwebBlock() = default;

short CobwebBlock::getId() const {
  return 1595;
}

std::shared_ptr<Block> CobwebBlock::clone() const {
  std::shared_ptr<CobwebBlock> copy = std::make_shared<CobwebBlock>();
  return copy;
}
