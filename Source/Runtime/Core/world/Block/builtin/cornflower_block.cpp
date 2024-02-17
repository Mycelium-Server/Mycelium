

#include "cornflower_block.h"

CornflowerBlock::CornflowerBlock() = default;
CornflowerBlock::~CornflowerBlock() = default;

short CornflowerBlock::getId() const {
  return 1676;
}

std::shared_ptr<Block> CornflowerBlock::clone() const {
  std::shared_ptr<CornflowerBlock> copy = std::make_shared<CornflowerBlock>();
  return copy;
}
