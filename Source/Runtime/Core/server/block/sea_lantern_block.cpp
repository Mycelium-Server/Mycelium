

#include "sea_lantern_block.h"

SeaLanternBlock::SeaLanternBlock() = default;
SeaLanternBlock::~SeaLanternBlock() = default;

short SeaLanternBlock::getId() const {
  return 8603;
}

std::shared_ptr<Block> SeaLanternBlock::clone() const {
  std::shared_ptr<SeaLanternBlock> copy = std::make_shared<SeaLanternBlock>();
  return copy;
}
