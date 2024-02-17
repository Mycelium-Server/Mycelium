

#include "damaged_anvil_block.h"

DamagedAnvilBlock::DamagedAnvilBlock() = default;
DamagedAnvilBlock::~DamagedAnvilBlock() = default;

short DamagedAnvilBlock::getId() const {
  return 7235 + facing * 1;
}

std::shared_ptr<Block> DamagedAnvilBlock::clone() const {
  std::shared_ptr<DamagedAnvilBlock> copy = std::make_shared<DamagedAnvilBlock>();
  copy->facing = facing;
  return copy;
}
