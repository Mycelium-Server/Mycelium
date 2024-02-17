

#include "spruce_planks_block.h"

SprucePlanksBlock::SprucePlanksBlock() = default;
SprucePlanksBlock::~SprucePlanksBlock() = default;

short SprucePlanksBlock::getId() const {
  return 16;
}

std::shared_ptr<Block> SprucePlanksBlock::clone() const {
  std::shared_ptr<SprucePlanksBlock> copy = std::make_shared<SprucePlanksBlock>();
  return copy;
}
