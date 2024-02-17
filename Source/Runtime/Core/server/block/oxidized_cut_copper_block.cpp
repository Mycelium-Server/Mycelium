

#include "oxidized_cut_copper_block.h"

OxidizedCutCopperBlock::OxidizedCutCopperBlock() = default;
OxidizedCutCopperBlock::~OxidizedCutCopperBlock() = default;

short OxidizedCutCopperBlock::getId() const {
  return 18914;
}

std::shared_ptr<Block> OxidizedCutCopperBlock::clone() const {
  std::shared_ptr<OxidizedCutCopperBlock> copy = std::make_shared<OxidizedCutCopperBlock>();
  return copy;
}
