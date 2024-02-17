

#include "stripped_mangrove_log_block.h"

StrippedMangroveLogBlock::StrippedMangroveLogBlock() = default;
StrippedMangroveLogBlock::~StrippedMangroveLogBlock() = default;

short StrippedMangroveLogBlock::getId() const {
  return 161 + axis * 1;
}

std::shared_ptr<Block> StrippedMangroveLogBlock::clone() const {
  std::shared_ptr<StrippedMangroveLogBlock> copy = std::make_shared<StrippedMangroveLogBlock>();
  copy->axis = axis;
  return copy;
}
