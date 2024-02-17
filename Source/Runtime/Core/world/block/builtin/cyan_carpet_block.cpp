

#include "cyan_carpet_block.h"

CyanCarpetBlock::CyanCarpetBlock() = default;
CyanCarpetBlock::~CyanCarpetBlock() = default;

short CyanCarpetBlock::getId() const {
  return 8616;
}

std::shared_ptr<Block> CyanCarpetBlock::clone() const {
  std::shared_ptr<CyanCarpetBlock> copy = std::make_shared<CyanCarpetBlock>();
  return copy;
}
