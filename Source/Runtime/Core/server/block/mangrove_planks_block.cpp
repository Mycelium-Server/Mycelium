

#include "mangrove_planks_block.h"

MangrovePlanksBlock::MangrovePlanksBlock() = default;
MangrovePlanksBlock::~MangrovePlanksBlock() = default;

short MangrovePlanksBlock::getId() const {
  return 21;
}

std::shared_ptr<Block> MangrovePlanksBlock::clone() const {
  std::shared_ptr<MangrovePlanksBlock> copy = std::make_shared<MangrovePlanksBlock>();
  return copy;
}
