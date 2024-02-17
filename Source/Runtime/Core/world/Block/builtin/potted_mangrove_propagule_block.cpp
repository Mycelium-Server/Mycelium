

#include "potted_mangrove_propagule_block.h"

PottedMangrovePropaguleBlock::PottedMangrovePropaguleBlock() = default;
PottedMangrovePropaguleBlock::~PottedMangrovePropaguleBlock() = default;

short PottedMangrovePropaguleBlock::getId() const {
  return 6904;
}

std::shared_ptr<Block> PottedMangrovePropaguleBlock::clone() const {
  std::shared_ptr<PottedMangrovePropaguleBlock> copy = std::make_shared<PottedMangrovePropaguleBlock>();
  return copy;
}
