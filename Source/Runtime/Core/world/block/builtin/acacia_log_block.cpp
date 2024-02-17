

#include "acacia_log_block.h"

AcaciaLogBlock::AcaciaLogBlock() = default;
AcaciaLogBlock::~AcaciaLogBlock() = default;

short AcaciaLogBlock::getId() const {
  return 129 + axis * 1;
}

std::shared_ptr<Block> AcaciaLogBlock::clone() const {
  std::shared_ptr<AcaciaLogBlock> copy = std::make_shared<AcaciaLogBlock>();
  copy->axis = axis;
  return copy;
}
