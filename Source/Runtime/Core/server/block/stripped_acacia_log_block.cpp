

#include "stripped_acacia_log_block.h"

StrippedAcaciaLogBlock::StrippedAcaciaLogBlock() = default;
StrippedAcaciaLogBlock::~StrippedAcaciaLogBlock() = default;

short StrippedAcaciaLogBlock::getId() const {
  return 152 + axis * 1;
}

std::shared_ptr<Block> StrippedAcaciaLogBlock::clone() const {
  std::shared_ptr<StrippedAcaciaLogBlock> copy = std::make_shared<StrippedAcaciaLogBlock>();
  copy->axis = axis;
  return copy;
}
