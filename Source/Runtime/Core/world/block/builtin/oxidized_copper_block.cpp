

#include "oxidized_copper_block.h"

OxidizedCopperBlock::OxidizedCopperBlock() = default;
OxidizedCopperBlock::~OxidizedCopperBlock() = default;

short OxidizedCopperBlock::getId() const {
  return 18908;
}

std::shared_ptr<Block> OxidizedCopperBlock::clone() const {
  std::shared_ptr<OxidizedCopperBlock> copy = std::make_shared<OxidizedCopperBlock>();
  return copy;
}
