#include "structure_block_block.h"

StructureBlockBlock::StructureBlockBlock() = default;
StructureBlockBlock::~StructureBlockBlock() = default;

short StructureBlockBlock::getId() const {
  if (mode == MODE_SAVE) return 16944;
  if (mode == MODE_LOAD) return 16945;
  if (mode == MODE_CORNER) return 16946;
  if (mode == MODE_DATA) return 16947;
  return 16945;
}
