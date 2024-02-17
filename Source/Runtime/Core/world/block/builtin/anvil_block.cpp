

#include "anvil_block.h"

AnvilBlock::AnvilBlock() = default;
AnvilBlock::~AnvilBlock() = default;

short AnvilBlock::getId() const {
  return 7227 + facing * 1;
}

std::shared_ptr<Block> AnvilBlock::clone() const {
  std::shared_ptr<AnvilBlock> copy = std::make_shared<AnvilBlock>();
  copy->facing = facing;
  return copy;
}
