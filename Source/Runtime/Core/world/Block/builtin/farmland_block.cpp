

#include "farmland_block.h"

FarmlandBlock::FarmlandBlock() = default;
FarmlandBlock::~FarmlandBlock() = default;

short FarmlandBlock::getId() const {
  return 3620 + moisture * 1;
}

std::shared_ptr<Block> FarmlandBlock::clone() const {
  std::shared_ptr<FarmlandBlock> copy = std::make_shared<FarmlandBlock>();
  copy->moisture = moisture;
  return copy;
}
