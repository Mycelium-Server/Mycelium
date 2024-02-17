

#include "spruce_sapling_block.h"

SpruceSaplingBlock::SpruceSaplingBlock() = default;
SpruceSaplingBlock::~SpruceSaplingBlock() = default;

short SpruceSaplingBlock::getId() const {
  return 24 + stage * 1;
}

std::shared_ptr<Block> SpruceSaplingBlock::clone() const {
  std::shared_ptr<SpruceSaplingBlock> copy = std::make_shared<SpruceSaplingBlock>();
  copy->stage = stage;
  return copy;
}
