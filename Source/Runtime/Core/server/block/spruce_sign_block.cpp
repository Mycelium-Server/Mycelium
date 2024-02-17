

#include "spruce_sign_block.h"

SpruceSignBlock::SpruceSignBlock() = default;
SpruceSignBlock::~SpruceSignBlock() = default;

short SpruceSignBlock::getId() const {
  return 3668 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> SpruceSignBlock::clone() const {
  std::shared_ptr<SpruceSignBlock> copy = std::make_shared<SpruceSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
