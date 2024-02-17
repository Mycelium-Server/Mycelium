

#include "seagrass_block.h"

SeagrassBlock::SeagrassBlock() = default;
SeagrassBlock::~SeagrassBlock() = default;

short SeagrassBlock::getId() const {
  return 1599;
}

std::shared_ptr<Block> SeagrassBlock::clone() const {
  std::shared_ptr<SeagrassBlock> copy = std::make_shared<SeagrassBlock>();
  return copy;
}
