

#include "mangrove_sign_block.h"

MangroveSignBlock::MangroveSignBlock() = default;
MangroveSignBlock::~MangroveSignBlock() = default;

short MangroveSignBlock::getId() const {
  return 3828 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> MangroveSignBlock::clone() const {
  std::shared_ptr<MangroveSignBlock> copy = std::make_shared<MangroveSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
