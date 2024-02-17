

#include "structure_void_block.h"

StructureVoidBlock::StructureVoidBlock() = default;
StructureVoidBlock::~StructureVoidBlock() = default;

short StructureVoidBlock::getId() const {
  return 10140;
}

std::shared_ptr<Block> StructureVoidBlock::clone() const {
  std::shared_ptr<StructureVoidBlock> copy = std::make_shared<StructureVoidBlock>();
  return copy;
}
