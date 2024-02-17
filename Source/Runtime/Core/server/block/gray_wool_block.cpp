

#include "gray_wool_block.h"

GrayWoolBlock::GrayWoolBlock() = default;
GrayWoolBlock::~GrayWoolBlock() = default;

short GrayWoolBlock::getId() const {
  return 1645;
}

std::shared_ptr<Block> GrayWoolBlock::clone() const {
  std::shared_ptr<GrayWoolBlock> copy = std::make_shared<GrayWoolBlock>();
  return copy;
}
