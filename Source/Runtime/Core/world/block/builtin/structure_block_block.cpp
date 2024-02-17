

#include "structure_block_block.h"

StructureBlockBlock::StructureBlockBlock() = default;
StructureBlockBlock::~StructureBlockBlock() = default;

short StructureBlockBlock::getId() const {
  return 16944 + mode * 1;
}

std::shared_ptr<Block> StructureBlockBlock::clone() const {
  std::shared_ptr<StructureBlockBlock> copy = std::make_shared<StructureBlockBlock>();
  copy->mode = mode;
  return copy;
}
