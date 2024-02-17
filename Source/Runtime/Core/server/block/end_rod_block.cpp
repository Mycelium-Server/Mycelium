

#include "end_rod_block.h"

EndRodBlock::EndRodBlock() = default;
EndRodBlock::~EndRodBlock() = default;

short EndRodBlock::getId() const {
  return 9939 + facing * 1;
}

std::shared_ptr<Block> EndRodBlock::clone() const {
  std::shared_ptr<EndRodBlock> copy = std::make_shared<EndRodBlock>();
  copy->facing = facing;
  return copy;
}
